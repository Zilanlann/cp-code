// Problem: C. New Year Snowmen
// Contest: Codeforces - Codeforces Round #100
// URL: https://codeforces.com/contest/140/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-15 14:53:33

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

    int n;
    cin >> n;
    map<int, int, greater<int> > ma;
    rep(i, 0, n) {
        int a;
        cin >> a;
        ma[a]++;
    }
    vector<pair<int, pair<int, int> > > ans;
    while (1) {
        int a[3], pos = 0;
        for (auto it = ma.begin(); it != ma.end();) {
            if (it->se > 0) {
                a[pos++] = it->fi;
                it->se--;
                auto it2 = it;
                it++;
                if (it2->se == 0) ma.erase(it2);
            }
            if (pos == 3) {
                ans.pb(mp(a[0], mp(a[1], a[2])));
                break;
            }
        }
        if (pos < 3) break;
    }
    cout << ans.size() << "\n";
    for (auto v : ans) {
        cout << v.fi << " " << v.se.fi << " " << v.se.se << "\n";
    }

    return 0;
}
