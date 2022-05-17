// Problem: A. Food for Animals
// Contest: Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Handle: chrisann
// Date: 2022-05-05 22:36:17

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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x = (x - a < 0) ? 0 : x - a;
        y = (y - b < 0) ? 0 : y - b;
        if (x + y <= c)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}
