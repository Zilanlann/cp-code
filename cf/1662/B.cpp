// Problem: B. Toys
// Contest: SWERC 2021-2022 - Online Mirror (Unrated, ICPC Rules, Teams
// Preferred) URL: https://codeforces.com/contest/1662/problem/B Memory Limit:
// 256 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-24 19:14:27

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

vector<pair<char, char> > ve;

void solve() {
    string s;
    cin >> s;
    vector<int> vis(ve.size(), 0);
    int tmp = SZ(ve);
    rep(i, 0, SZ(s)) {
        rep(j, 0, SZ(ve)) {
            if (ve[j] == mp(s[i], '0') && vis[j] == 0) {
                vis[j] = 1;
                break;
            }
        }
    }

    rep(i, 0, SZ(s)) {
        bool fl = 1;
        rep(j, 0, tmp) { if () }
        if (fl) ve.pb(mp(s[i], '0'));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    string s1;
    cin >> s1;
    rep(i, 0, SZ(s1)) ve.pb(mp(s1[i], '0'));
    rep(i, 1, 3) solve();
    return 0;
}
