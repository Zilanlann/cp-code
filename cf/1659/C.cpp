// Problem: C. Line Empire
// Contest: Codeforces Round #782 (Div. 2)
// URL: https://codeforces.com/contest/1659/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-17 22:44:51

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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> ve(n);
        for (auto& v : ve) cin >> v;
        ll ans = 0;
        if (a < b) {
            rep(i, 1, n) {
                ans += b * (ve[i] - ve[i - 1]);
                ans += a * (ve[i] - ve[i - 1]);
            }
            ans -= a * (ve[n - 1] - ve[n - 2]);
        } else {
            rep(i, 0, n) ans += b * (ve[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}
