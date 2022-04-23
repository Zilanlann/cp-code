// Problem: 博弈大师
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/11225/B
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Author: chrisann
// Date: 2022-04-22 19:00:20

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

vector<ll> ve;
ll n;

bool check(ll mid) {
    if (mid * (mid + 1) / 2 > n)
        return true;
    else
        return false;
}

ll binary_search() {
    ll l = 0, r = 1e8 + 2;
    while (l + 1 < r) {
        ll mid = l + (r - l >> 1);
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> n >> a >> b;
        ll cnt = binary_search();
        if (cnt % 2 == 0) {
            if (a > b) {
                cout << "niuniu";
            } else
                cout << "niumei";
        } else {
            if (b > a)
                cout << "niumei";
            else
                cout << "niuniu";
        }
        cout << "\n";
    }

    return 0;
}
