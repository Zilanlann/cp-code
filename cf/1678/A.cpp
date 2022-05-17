// Problem: A. Tokitsukaze and All Zero Sequence
// Contest: Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/contest/1678/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Handle: chrisann
// Date: 2022-05-08 22:40:37

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
    sort(all(ve));
    bool is_eq = 0;
    rep(i, 1, n) {
        if (ve[i] == ve[i - 1]) is_eq = 1;
    }
    auto it = upper_bound(all(ve), 0);
    if (ve[0] == 0) {
        cout << ve.end() - it << "\n";
    } else if (is_eq) {
        cout << n << "\n";
    } else
        cout << n + 1 << "\n";
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
