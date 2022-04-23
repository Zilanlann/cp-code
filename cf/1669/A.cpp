// Problem: A. Division?
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-21 22:35:04

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

    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a <= 1399)
            cout << "Division 4";
        else if (a <= 1599)
            cout << "Division 3";
        else if (a <= 1899)
            cout << "Division 2";
        else
            cout << "Division 1";
        cout << "\n";
    }

    return 0;
}
