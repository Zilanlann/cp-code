// Problem: B - Triple Metre
// Contest: AtCoder - AtCoder Beginner Contest 230
// URL: https://atcoder.jp/contests/abc230/tasks/abc230_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-01 10:05:07

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

bool solve() {
    string s;
    cin >> s;
    vector<int> ve;
    rep(i, 0, SZ(s)) {
        if (s[i] == 'o') ve.pb(i + 1);
    }
    if (ve.empty()) {
        if (SZ(s) > 2)
            return false;
        else
            return true;
    }
    if (ve[0] > 3 || SZ(s) - ve.back() > 2) return false;
    rep(i, 1, SZ(ve)) {
        if (ve[i] - ve[i - 1] != 3) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cout << (solve() ? "Yes" : "No") << "\n";

    return 0;
}
