// Problem: D - Neighbors
// Contest: AtCoder - Panasonic Programming Contest 2021(AtCoder Beginner
// Contest 231) URL: https://atcoder.jp/contests/abc231/tasks/abc231_d Memory
// Limit: 1024 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-20 17:05:34

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

const int maxn = 1e5 + 5;
int vis[maxn];
vector<int> ga[maxn];

bool dfs(int u, int v) {
    if (vis[v] == 1) return false;
    vis[v]++;
    for (auto p : ga[v]) {
        if (p == u) continue;
        if (!dfs(v, p)) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int n, m;
    cin >> n >> m;
    vector<int> ve(n, 0);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        ve[a - 1]++, ve[b - 1]++;
        ga[a].pb(b);
        ga[b].pb(a);
    }
    if (*max_element(all(ve)) > 2)
        cout << "No";
    else {
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                if (!dfs(0, i)) {
                    cout << "No"
                         << "\n";
                    return 0;
                }
            }
        }
        cout << "Yes"
             << "\n";
    }

    return 0;
}
