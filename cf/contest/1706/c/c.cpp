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

const int maxn = 1e5 + 5;
int t;
ll a[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n % 2 != 0) {
            for (int i = 1; i < n - 1; i += 2) {
                ll x = max(a[i - 1], a[i + 1]);
                if (a[i] <= x) ans += x + 1 - a[i];
            }
        } else {
            vector<ll> ve;
            for (int i = n - 2; i >= 2; i -= 2) {
                ll x = max(a[i - 1], a[i + 1]);
                if (a[i] <= x) {
                    ans += x + 1 - a[i];
                }
                ve.push_back(ans);
            }
            int pos = 0;
            ll tmp = 0;
            for (int i = 1; i < n - 1; i += 2) {
                ll x = max(a[i - 1], a[i + 1]);
                ans = min(ans, tmp + ve[ve.size() - pos - 1]);
                if (a[i] <= x) {
                    tmp += x + 1 - a[i];
                }
                pos++;
            }
            ans = min(ans, tmp);
        }
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-18 22:38:26
