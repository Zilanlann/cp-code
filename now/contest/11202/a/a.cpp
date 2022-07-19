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

int n;
ll ans;
vector<ll> ve;
ll a[40];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n;
    for (int i = 0; i < 32; i++) ve.push_back(1ll << i);
    // for (auto v : ve) cout << v << " ";
    for (int i = 0; i < n; i++) {
        int ax;
        cin >> ax;
        if (ax == 0) continue;
        auto it = lower_bound(ve.begin(), ve.end(), ax);
        int pos = it - ve.begin();
        if (*it != ax) pos--;
        // cout << pos << " ";
        a[pos]++;
    }
    for (int i = 0; i < 40; i++) {
        if (a[i] >= 2) ans += (a[i] - 1) * a[i] / 2;
    }
    cout << ans << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-15 19:03:40
