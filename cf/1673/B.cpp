// Problem: B. A Perfectly Balanced String?
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Handle: chrisann
// Date: 2022-04-30 22:41:15

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

bool solve() {
    string s;
    cin >> s;
    vector<int> ve[26];
    rep(i, 0, SZ(s)) { ve[s[i] - 'a'].pb(i + 1); }
    rep(i, 0, 26) {
        for (int j = 0; j < SZ(ve[i]) - 1; j++) {
            int l = ve[i][j], r = ve[i][j + 1];
            for (int k = 0; k < 26; k++) {
                if (i == k || ve[k].empty()) continue;
                auto it = lower_bound(all(ve[k]), l);
                if (it == ve[k].end() || *it >= r) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
