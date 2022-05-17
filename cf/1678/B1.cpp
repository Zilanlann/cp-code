// Problem: B1. Tokitsukaze and Good 01-String (easy version)
// Contest: Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/contest/1678/problem/B1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Handle: chrisann
// Date: 2022-05-08 22:40:38

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
    rep(i, 0, n) {
        char a;
        cin >> a;
        if (a == '1')
            ve[i] = 1;
        else
            ve[i] = 0;
    }
    int cnt = 1;
    int ans = 0;
    rep(i, 1, n) {
        if (ve[i] == ve[i - 1])
            cnt++;
        else {
            if (cnt % 2 != 0) {
                ve[i] = ve[i - 1];
                cnt = 0;
                ans++;
            } else
                cnt = 1;
        }
    }
    cout << ans << "\n";
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
