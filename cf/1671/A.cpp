// Problem: A. String Building
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/A
// Memory Limit: 512 MB
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
    string s;
    cin >> s;
    s += "p";
    int cnt = 1;
    rep(i, 1, SZ(s)) {
        if (s[i] != s[i - 1]) {
            if (cnt == 1) {
                cout << "NO"
                     << "\n";
                return;
            }
            cnt = 0;
        }
        cnt++;
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
