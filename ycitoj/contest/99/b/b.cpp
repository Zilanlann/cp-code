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

const int maxn = 1e7 + 5;
int n, m;
int a[maxn];

bool check(int x) {
    string s = to_string(x);
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '4') return false;
        if (s[i] == '6' && s[i + 1] == '2') return false;
    }
    if (s[s.size() - 1] == '4') return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    for (int i = 0; i < 1e7 + 1; i++) {
        if (check(i))
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 1; i < 1e7 + 1; i++) {
        a[i] += a[i - 1];
    }
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        cout << a[m] - a[n - 1] << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 14:18:16
