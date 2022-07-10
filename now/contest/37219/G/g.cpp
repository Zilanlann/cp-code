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

int n, m;
ll ans;
map<int, int> ma;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ma[a]++;
    }
    for (auto [x, y] : ma) {
        if (x > m / 2) break;
        if (x == m / 2) {
            ans += ll(ma[x]) * (ma[x] - 1) / 2;
        }
        if (m - x > 0) ans += ll(ma[m - x]) * ma[x];
    }
    cout << ans << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-08 15:33:22
