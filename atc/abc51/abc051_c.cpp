// Author: chrisann
// Date: 2022-04-14 14:28:18
// Problem: C - Back and Forth
// Contest: AtCoder -  AtCoder Beginner Contest 051
// URL: https://atcoder.jp/contests/abc051/tasks/abc051_c
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = c - a, y = d - b;
    rep(i, 0, y) cout << 'U';
    rep(i, 0, x) cout << 'R';
    rep(i, 0, y) cout << 'D';
    rep(i, 0, x) cout << 'L';
    cout << 'L';
    rep(i, 0, y + 1) cout << 'U';
    rep(i, 0, x + 1) cout << 'R';
    cout << "DR";
    rep(i, 0, y + 1) cout << 'D';
    rep(i, 0, x + 1) cout << 'L';
    cout << 'U';

    return 0;
}
