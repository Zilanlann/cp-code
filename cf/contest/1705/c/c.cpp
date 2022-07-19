#include <algorithm>
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
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

ll t, n, c, q;
string s;
vector<ll> len;
vector<pair<ll, ll>> pos;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        len.clear();
        pos.clear();
        cin >> n >> c >> q;
        cin >> s;
        len.push_back(n);
        pos.push_back({1, n});
        for (int i = 0; i < c; i++) {
            ll l, r;
            cin >> l >> r;
            pos.push_back({l, r});
            len.push_back(len.back() + r - l + 1);
        }
        while (q--) {
            ll x;
            cin >> x;
            while (x > n) {
                // assert(cnt < 50);
                auto it = lower_bound(len.begin(), len.end(), x);
                ll tmp = it - len.begin();
                // cout << pos[tmp].first << " " << x << " " << *(it - 1) << "\n";
                x = pos[tmp].first + x - *(it - 1) - 1;
            }
            cout << s[x - 1] << "\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 09:45:01
