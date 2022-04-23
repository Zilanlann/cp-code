// Problem: G. Fall Down
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:10

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
        int n, m;
        cin >> n >> m;
        vector<char> ve[m];
        rep(i, 0, n) {
            rep(j, 0, m) {
                char c;
                cin >> c;
                ve[j].pb(c);
            }
        }
        rep(i, 0, m) {
            vector<char> tmp;
            int a = 0, b = 0;
            for (char v : ve[i]) {
                if (v == '*') {
                    a++, b++;
                } else if (v == 'o') {
                    rep(i, 0, b - a) tmp.pb('.');
                    rep(i, 0, a) tmp.pb('*');
                    tmp.pb('o');
                    a = 0, b = 0;
                } else {
                    b++;
                }
            }
            if (b != 0) {
                rep(i, 0, b - a) tmp.pb('.');
                rep(i, 0, a) tmp.pb('*');
            }
            ve[i] = tmp;
        }
        rep(i, 0, n) {
            rep(j, 0, m) { cout << ve[j][i]; }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
