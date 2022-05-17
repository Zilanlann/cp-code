// Problem: A - First Grid
// Contest: AtCoder - NEC Programming Contest 2021(AtCoder Beginner Contest 229)
// URL: https://atcoder.jp/contests/abc229/tasks/abc229_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-09 11:00:22

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

    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == '#' && d == '#' && b == '.' && c == '.')
        cout << "No";
    else if (b == '#' && c == '#' && a == '.' && d == '.')
        cout << "No";
    else
        cout << "Yes";
    cout << "\n";

    return 0;
}
