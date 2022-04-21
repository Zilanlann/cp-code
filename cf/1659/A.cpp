// Problem: A. Red Versus Blue
// Contest: Codeforces Round #782 (Div. 2)
// URL: https://codeforces.com/contest/1659/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-17 22:44:49

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
        int n, a, b;
        cin >> n >> a >> b;
        int ans = a / (b + 1);
        vector<int> ve(b + 1, ans);
        a -= ans * (b + 1);
        rep(i, 0, a) ve[i]++;
        rep(i, 0, ve.size()) {
            string s(ve[i], 'R');
            cout << s;
            if (i != ve.size() - 1) cout << 'B';
        }
        cout << "\n";
    }

    return 0;
}
