// Problem: C. Detective Task
// Contest: Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-05 22:36:19

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
    string s;
    cin >> s;
    vector<int> ve[3];
    rep(i, 0, SZ(s)) {
        if (s[i] == '0')
            ve[0].pb(i + 1);
        else if (s[i] == '1')
            ve[1].pb(i + 1);
        else
            ve[2].pb(i + 1);
    }
    int ans;
    if (ve[0].empty()) {
        if (ve[1].empty())
            ans = SZ(s);
        else
            ans = SZ(s) - ve[1].back() + 1;
    } else {
        if (ve[1].empty())
            ans = ve[0][0];
        else
            ans = ve[0][0] - ve[1].back() + 1;
    }
    cout << ans << "\n";
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
