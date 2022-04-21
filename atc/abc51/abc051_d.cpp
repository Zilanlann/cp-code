// Author: chrisann
// Date: 2022-04-14 14:28:19
// Problem: D - Candidates of No Shortest Paths
// Contest: AtCoder -  AtCoder Beginner Contest 051
// URL: https://atcoder.jp/contests/abc051/tasks/abc051_d
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

int n, m;
int a[105][105], f[105][105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    memset(a, 127, sizeof(a));
    rep(i, 0, n) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z, a[y][x] = z;
    }
    rep(k, 1, n + 1) {
        rep(x, 1, n + 1) {
            rep(y, 1, n + 1) { f[x][y] = min(f[x][y], f[x][k] + f[k][y]); }
        }
    }

    return 0;
}
