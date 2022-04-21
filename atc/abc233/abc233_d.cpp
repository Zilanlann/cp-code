// Author: chrisann
// Date: 2022-04-14 10:12:33
// Problem: D - Count Interval
// Contest: AtCoder - AtCoder Beginner Contest 233
// URL: https://atcoder.jp/contests/abc233/tasks/abc233_d
// Memory Limit: 1024 MB
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

    int n;
    ll k;
    cin >> n >> k;
    ll tmp = 0;
    map<ll, int> ma;
    ma[0]++;
    ll ans = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        tmp += a;
        ans += ma[tmp - k];
        ma[tmp]++;
    }
    cout << ans << "\n";

    return 0;
}
