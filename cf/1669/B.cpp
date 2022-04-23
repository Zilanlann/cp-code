// Problem: B. Triple
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:05

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
        int n;
        cin >> n;
        vector<int> ve(n + 1);
        rep(i, 0, n) {
            int a;
            cin >> a;
            ve[a]++;
        }
        int ans = *max_element(all(ve));
        if (ans >= 3)
            cout << max_element(all(ve)) - ve.begin();
        else
            cout << -1;
        cout << "\n";
    }

    return 0;
}
