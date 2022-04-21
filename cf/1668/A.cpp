// Problem: A. Direction Change
// Contest: Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/contest/1668/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-19 22:36:56

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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        if ((n == 1 && m >= 3) || (m == 1 && n >= 3)) {
            cout << -1 << "\n";
            continue;
        }
        ll ans = n + m - 2;
        ans += abs(n - m) / 2 * 2;
        cout << ans << "\n";
    }

    return 0;
}
