// Author: chrisann
// Date: 2022-04-14 14:28:18
// Problem: A - Haiku
// Contest: AtCoder -  AtCoder Beginner Contest 051
// URL: https://atcoder.jp/contests/abc051/tasks/abc051_a
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    string s;
    cin >> s;
    rep(i, 0, SZ(s)) {
        if (s[i] == ',')
            cout << " ";
        else
            cout << s[i];
    }

    return 0;
}
