// Problem: D. Vertical Paths
// Contest: Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-05 22:36:20

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

void dfs(map<int, vector<int> >& ma, vector<int>& ans, vector<vector<int> >& ve,
         int u) {
    ans.pb(u);
    if (ma[u].empty()) {
        // cout << ans.size() << "\n";
        // for (auto v : ans) cout << v << " ";
        // cout << "\n";
        // ans.clear();
        ve.pb(ans);
        ans.clear();
        return;
    }
    for (auto v : ma[u]) {
        dfs(ma, ans, ve, v);
    }
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
        int n;
        cin >> n;
        map<int, vector<int> > ma;
        vector<int> vis(n, 0);
        int ru;
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (a == i)
                ru = i;
            else
                ma[a].pb(i);
        }
        vector<vector<int> > ve;
        vector<int> ans;
        dfs(ma, ans, ve, ru);
        cout << ve.size() << "\n";
        for (auto v : ve) {
            cout << v.size() << "\n";
            for (auto s : v) cout << s << " ";
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
