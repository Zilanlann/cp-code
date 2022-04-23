// Problem: 孤独的数组
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/11225/A
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-22 19:00:08

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

    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    rep(i, 0, n - 1) {
        if (gcd(ve[i], ve[i + 1]) != 1) {
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";

    return 0;
}
