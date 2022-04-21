// Problem: B - Election
// Contest: AtCoder - Panasonic Programming Contest 2021(AtCoder Beginner
// Contest 231) URL: https://atcoder.jp/contests/abc231/tasks/abc231_b Memory
// Limit: 1024 MB Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-20 16:36:24

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

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.se == b.se)
        return a.fi > b.fi;
    else
        return a.se > b.se;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int n;
    cin >> n;
    map<string, int> ma;
    rep(i, 0, n) {
        string s;
        cin >> s;
        ma[s]++;
    }
    vector<pair<string, int> > ve(all(ma));
    sort(all(ve), cmp);
    cout << ve[0].fi << "\n";

    return 0;
}
