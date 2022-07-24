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
vector<pair<int, int>> ve;
int l, r, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        ve.push_back({x - y, x + y});
    }
    sort(ve.begin(), ve.end());
    l = ve[0].first, r = ve[0].second;
    for (auto [x, y] : ve) {
        if (x > r) ans += x - r;
        if (y > r) r = y;
    }
    cout << ans << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-20 14:15:59
