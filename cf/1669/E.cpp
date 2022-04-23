// Problem: E. 2-Letter Strings
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:08

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
    while (t--) {
        map<char, map<char, int> > ma1;
        map<char, set<char> > ma2;
        int n;
        cin >> n;
        rep(i, 0, n) {
            char a, b;
            cin >> a >> b;
            ma1[a][b]++;
            ma2[b].insert(a);
        }
        ll ans = 0;
        for (auto v : ma1) {
            if (v.se.size() <= 1)
                continue;
            else {
                ll tmp = v.se.size();
                ans += tmp * (tmp - 1) / 2;
            }
        }
        for (auto v : ma2) {
            if (v.se.size() <= 1)
                continue;
            else {
                ll tmp = v.se.size();
                ans += tmp * (tmp - 1) / 2;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
