// Problem: C - Product
// Contest: AtCoder - AtCoder Beginner Contest 233
// URL: https://atcoder.jp/contests/abc233/tasks/abc233_c
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

int n;
ll k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> k;
    vector<ll> ve{1};
    rep(i, 0, n) {
        vector<ll> ve2;
        int m;
        cin >> m;
        while (m--) {
            int a;
            cin >> a;
            for (auto v : ve) {
                if (a <= k / v) ve2.pb(a * v);
            }
        }
        ve = ve2;
    }
    cout << count(all(ve), k) << "\n";

    return 0;
}
