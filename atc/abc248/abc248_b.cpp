// Problem: B - Slimes
// Contest: AtCoder - UNIQUE VISION Programming Contest 2022（AtCoder Beginner
// Contest 248） URL: https://atcoder.jp/contests/abc248/tasks/abc248_b Memory
// Limit: 1024 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-19 15:06:42

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

    db a, b, k;
    cin >> a >> b >> k;
    b /= a;
    db ans = 1;
    int cnt = 0;
    while (ans < b) {
        ans *= k;
        cnt++;
    }
    cout << cnt;

    return 0;
}
