// Author: chrisann
// Date: 2022-04-14 19:29:05
// Problem: D - Weak Takahashi
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner
// Contest 232) URL: https://atcoder.jp/contests/abc232/tasks/abc232_d Memory
// Limit: 1024 MB Time Limit: 2000 ms

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

char a[105][105];
int f[105][105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = h; i >= 1; i--) {
        for (int j = w; j >= 1; j--) {
            if (a[i][j] == '.') {
                f[i][j] = max(f[i + 1][j], f[i][j + 1]) + 1;
            }
        }
    }
    cout << f[1][1];

    return 0;
}
