#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
// head

const int N = 1e5 + 5;
int a[N][15], aa[15];
ll num[N];

__int128 gcd(__int128 a, __int128 b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    ll n;
    cin >> n;
    bitset<15> b;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        b = x;
        for (int j = 0; j < 15; j++) aa[j] += b[j];
    }
    for (int j = 0; j < 15; j++) {
        for (int i = 1; i <= n; i++) {
            if (aa[j] <= 0) continue;
            a[i][j] = 1;
            aa[j]--;
        }
    }
    for (int i = 1; i <= n; i++) {
        int x = 0;
        for (int j = 0; j < 15; j++) {
            x ^= a[i][j] << j;
        }
        num[i] = x;
    }
    __int128 x = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += num[i];
    }
    for (int i = 1; i <= n; i++) {
        x += (sum - n * num[i]) * (sum - n * num[i]);
    }
    __int128 y = n * n * n;
    __int128 tmp = gcd(x, y);
    if (x / tmp == 0)
        cout << "0/1\n";
    else
        cout << ll(x / tmp) << "/" << ll(y / tmp) << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-30 12:19:14