// Problem: F. Eating Candies
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:09

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
        int l = 0, r = n - 1;
        vector<int> ve(n);
        for (auto& v : ve) cin >> v;
        ll a = ve[0], b = ve[n - 1];
        int ans = 0, cnt = 2;
        while (l < r) {
            if (a < b) {
                l++;
                a += ve[l];
                cnt++;
            } else if (a > b) {
                r--;
                b += ve[r];
                cnt++;
            } else {
                l++, r--;
                a = ve[l], b = ve[r];
                ans += cnt;
                cnt = 2;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
