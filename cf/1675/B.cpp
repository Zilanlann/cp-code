// Problem: B. Make It Increasing
// Contest: Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-05 22:36:18

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

void solve() {
    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    reverse(all(ve));
    ll ans = 0;
    for (int i = 1; i < SZ(ve); i++) {
        if (ve[i - 1] == 0) {
            cout << -1 << "\n";
            return;
        }
        while (ve[i] >= ve[i - 1]) {
            ve[i] /= 2;
            ans++;
        }
    }
    cout << ans << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
