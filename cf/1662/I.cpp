// Problem: I. Ice Cream Shop
// Contest: SWERC 2021-2022 - Online Mirror (Unrated, ICPC Rules, Teams
// Preferred) URL: https://codeforces.com/contest/1662/problem/I Memory Limit:
// 256 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-24 20:33:55

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

int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    vector<int> ve1(n), ve2(m);
    for (auto& v : ve1) cin >> v;
    for (auto& v : ve2) cin >> v;
    for (int i = 1; i < ve2.size(); i++) {
        int l = ve2[i - 1], r = ve2[i];
    }

    return 0;
}
