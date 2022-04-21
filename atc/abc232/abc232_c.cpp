// Author: chrisann
// Date: 2022-04-14 19:29:05
// Problem: C - Graph Isomorphism
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner
// Contest 232) URL: https://atcoder.jp/contests/abc232/tasks/abc232_c Memory
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

int n, m;
int a[10][10], b[10][10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        b[x][y] = 1;
        b[y][x] = 1;
    }
    vector<int> ve(n);
    rep(i, 0, n) ve[i] = i + 1;
    bool fl = 1;
    while (fl) {
        bool lw = 1;
        rep(i, 1, n + 1) {
            rep(j, 1, n + 1) {
                if (a[i][j] != b[ve[i - 1]][ve[j - 1]]) {
                    lw = 0;
                    break;
                }
            }
            if (!lw) break;
        }
        if (lw) {
            cout << "Yes";
            break;
        }
        fl = next_permutation(all(ve));
    }
    if (!fl) cout << "No";

    return 0;
}
