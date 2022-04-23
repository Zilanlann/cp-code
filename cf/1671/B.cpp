// Problem: B. Consecutive Points Segment
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/B
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

void solve() {
    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    rep(i, 0, n - 1) { ve[i] = ve[i + 1] - ve[i]; }
    ve.pop_back();
    int fl = 0;
    for (auto v : ve) {
        if (v > 3) {
            cout << "NO"
                 << "\n";
            return;
        } else if (v == 3) {
            if (fl > 0) {
                cout << "NO"
                     << "\n";
                return;
            } else {
                fl = 3;
            }
        } else if (v == 2) {
            if (fl == 4 || fl == 3) {
                cout << "NO"
                     << "\n";
                return;
            } else if (fl == 2)
                fl = 4;
            else
                fl = 2;
        }
    }
    cout << "YES"
         << "\n";
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
