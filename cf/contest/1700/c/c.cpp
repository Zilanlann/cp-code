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
const int maxn = 2e5 + 5;
ll a[maxn], d[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        rep(i, 0, n) cin >> a[i];
        rep(i, 1, n) d[i] = a[i] - a[i - 1];
        d[0] = a[0];
        ll ans = 0;
        rep(i, 1, n) {
            if (d[i] < 0)
                ans -= d[i], d[0] -= -d[i];
            else if (d[i] > 0)
                ans += d[i];
        }
        ans += abs(d[0]);
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-01 19:31:16
