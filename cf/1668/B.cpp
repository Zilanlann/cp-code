// Problem: B. Social Distance
// Contest: Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/contest/1668/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
//
// Author: chrisann
// Date: 2022-04-19 22:36:57

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

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> ve(n);
        for (auto& v : ve) cin >> v;
        sort(all(ve), greater<int>());
        ll ans = ve[0];
        for (auto v : ve) {
            ans += v + 1;
        }
        ans -= ve.back();
        if (ans <= m)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
