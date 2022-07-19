#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

const int maxn = 1e5 + 5;
ll n, sum1, sum2, x, y;
ll a[maxn];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    x = a[n / 2], y = a[n / 2 + 1];
    for (int i = 0; i < n; i++) {
        sum1 += abs(a[i] - x);
        sum2 += abs(a[i] - y);
    }
    cout << min(sum1, sum2) << "\n";


    return 0;
}

// handle:Chrisann
// date:2022-07-17 14:40:42
