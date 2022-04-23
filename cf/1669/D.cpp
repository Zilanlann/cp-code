// Problem: D. Colorful Stamp
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:07

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
    int r = 0, b = 0;
    char z[n];
    rep(i, 0, n) cin >> z[i];
    // if (count(z, z + n, 'W') == n) {
    // cout << "YES";
    // return;
    // }
    rep(i, 0, n) {
        char c = z[i];
        if (c == 'B')
            b++;
        else if (c == 'R')
            r++;
        else {
            if (i != 0 && z[i - 1] != 'W' && (b < 1 || r < 1)) {
                cout << "NO";
                return;
            }
            r = 0, b = 0;
        }
    }
    if (z[n - 1] != 'W' && (b < 1 || r < 1)) {
        cout << "NO";
        return;
    }
    cout << "YES";
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
        cout << "\n";
    }

    return 0;
}
