// Problem: E. Breaking the Wall
// Contest: Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-02 22:35:10

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
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    vector<pair<int, int> > vv;
    for (int i = 0; i < ve.size(); i++) {
        vv.pb(mp(ve[i], i));
    }
    sort(all(vv));
    int a, b, c, d;
    a = vv[0].fi;
    if (vv[0].fi == 0) return 0;
}
