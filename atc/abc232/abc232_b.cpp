// Author: chrisann
// Date: 2022-04-14 19:29:05
// Problem: B - Caesar Cipher
// Contest: AtCoder - M-SOLUTIONS Programming Contest 2021(AtCoder Beginner
// Contest 232) URL: https://atcoder.jp/contests/abc232/tasks/abc232_b Memory
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

string s1, s2;

void solve() {
    rep(i, 0, 26) {
        string s = s1;
        rep(j, 0, SZ(s1)) { s[j] = (s[j] - 'a' + i) % 26 + 'a'; }
        if (s == s2) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s1 >> s2;
    solve();

    return 0;
}
