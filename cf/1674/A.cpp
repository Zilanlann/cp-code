// Problem: A. Number Transformation
// Contest: Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-02 22:35:06

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

vector<int> ve[101];

void solve() {
    int x, y;
    cin >> x >> y;
    if (y % x != 0) {
        cout << "0 0\n";
        return;
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = 0; j < ve[i].size(); j++) {
            if (ve[i][j] == y / x) {
                cout << j + 1 << " " << i << "\n";
                return;
            }
        }
    }
    cout << "0 0\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    ve[1].pb(1);
    for (int i = 2; i <= 100; i++) {
        int a = 1;
        while (a <= 100) {
            a *= i;
            ve[i].pb(a);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
