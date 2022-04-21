// Problem: C - Counting 2
// Contest: AtCoder - Panasonic Programming Contest 2021(AtCoder Beginner
// Contest 231) URL: https://atcoder.jp/contests/abc231/tasks/abc231_c Memory
// Limit: 1024 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-20 16:51:04

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

    int n, m;
    cin >> n >> m;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    sort(all(ve));
    while (m--) {
        int a;
        cin >> a;
        auto it = lower_bound(all(ve), a);
        cout << ve.end() - it << "\n";
    }

    return 0;
}
