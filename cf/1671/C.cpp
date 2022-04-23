// Problem: C. Dolce Vita
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-22 22:36:00

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    ll t;
    cin >> t;
    while (t--) {
        ll n, k, d = 0;
        cin >> n >> k;
        vector<ll> ve(n);
        for (auto& v : ve) cin >> v;
        sort(all(ve));
        rep(i, 1, n) { ve[i] += ve[i - 1]; }
        ll ans = 0;
        bool fl = 1;
        per(i, 0, n) {
            ve[i] += d * (i + 1);
            if (ve[i] <= k) {
                if (fl) ans += i + 1;
                fl = 0;
                ans += (i + 1) * ((k - ve[i]) / (i + 1));
                d += (k - ve[i]) / (i + 1);
            }
            // cout << ans << " ";
        }
        cout << ans << "\n";
    }

    return 0;
}
