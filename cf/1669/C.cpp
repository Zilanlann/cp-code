// Problem: C. Odd/Even Increments
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:06

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

int a[100], n;
bool solve() {
    for (int i = 2; i < n; i += 2) {
        if (a[i] % 2 != a[i - 2] % 2) {
            return false;
        }
    }
    for (int i = 3; i < n; i += 2) {
        if (a[i] % 2 != a[i - 2] % 2) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        rep(i, 0, n) cin >> a[i];
        if (solve())
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
