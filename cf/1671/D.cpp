// Problem: D. Insert a Progression
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/D
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

    int t;
    cin >> t;
    int cnt = 0;
    while (t--) {
        cnt++;
        int n, k;
        cin >> n >> k;
        vector<int> ve(n);
        for (auto& v : ve) cin >> v;
        int l = *min_element(all(ve));
        int r = *max_element(all(ve));
        ll ans = 0;
        rep(i, 1, n) { ans += abs(ve[i] - ve[i - 1]); }
        if (k <= l) {
            if (ve[0] == l || ve[n - 1] == l)
                ans += l - 1;
            else
                ans += 2 * (l - 1);
        } else {
            if (ve[0] == l || ve[n - 1] == l)
                ans += l - 1;
            else if (l != 1)
                ans += l;
            if (k > r) {
                if (ve[0] == r || ve[n - 1] == r)
                    ans += k - r;
                else
                    ans += k - r + 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
