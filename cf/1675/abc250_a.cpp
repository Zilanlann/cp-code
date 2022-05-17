// Problem: A - Adjacent Squares
// Contest: AtCoder - AtCoder Beginner Contest 250
// URL: https://atcoder.jp/contests/abc250/tasks/abc250_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-08 20:02:27

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

    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans = 0;
    if ((r == 1 || r == h) && (c == 1 || c == w))
        ans = 2;
    else if ((r == 1 || r == h) || (c == 1 || c == w))
        ans = 3;
    else
        ans = 4;
    if (h == 1 || w == 1) ans--;
    if (h == 1 && w == 1) ans = 0;
    cout << ans << "\n";

    return 0;
}
