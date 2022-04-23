// Problem: 交替加乘
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/11225/D
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-22 19:00:34

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

const ll mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    sort(all(ve), greater<int>());
    vector<int> ve2(n);
    ve2[0] = ve.back(), ve.pop_back();
    for (int i = 1; i < n; i += 2) {
        ve2[i] = ve.back();
        ve.pop_back();
    }
    reverse(all(ve));
    for (int i = 2; i < n; i += 2) {
        ve2[i] = ve.back();
        ve.pop_back();
    }
    ll ans = ve2[0];
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            ans *= ve2[i];
            ans %= mod;
        } else {
            ans += ve2[i];
            // ans %= mod;
        }
    }
    cout << ans << "\n";

    return 0;
}
