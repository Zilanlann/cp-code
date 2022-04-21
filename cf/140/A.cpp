// Problem: A. New Year Table
// Contest: Codeforces - Codeforces Round #100
// URL: https://codeforces.com/contest/140/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-15 14:53:33

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
//

const db PI = 3.141592654;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    db n, R, r;
    cin >> n >> R >> r;
    db sin = r / (R - r);
    db ans = asin(sin) * 2;
    if (R < r || (R - r < r && n > 1) || (R - r == r && n > 4))
        cout << "NO";
    else
        cout << ((ans * n > 2 * PI) ? "NO" : "YES");

    return 0;
}
