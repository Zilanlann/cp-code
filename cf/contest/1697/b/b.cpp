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

    ll n, t;
    cin >> n >> t;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll ans = a[x - 1];
        if (x - y != 0)
            ans -= a[x - y - 1];
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-06-12 22:35:45
