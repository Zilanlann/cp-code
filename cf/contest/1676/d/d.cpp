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

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        rep(i, 0, n) {
            rep(j, 0, m) { cin >> a[i][j]; }
        }
        ll ans = 0;
        rep(i, 0, n) {
            rep(j, 0, m) {
                ll tmp = a[i][j];
                int q = max(n, m);
                for (int k = 1; k <= q; k++) {
                    if (i + k < n && j + k < m && i + k >= 0 && j + k >= 0)
                        tmp += a[i + k][j + k];
                    if (i + k < n && j - k < m && i + k >= 0 && j - k >= 0)
                        tmp += a[i + k][j - k];
                    if (i - k < n && j + k < m && i - k >= 0 && j + k >= 0)
                        tmp += a[i - k][j + k];
                    if (i - k < n && j - k < m && i - k >= 0 && j - k >= 0)
                        tmp += a[i - k][j - k];
                }

                // cout << tmp << " ";
                ans = max(tmp, ans);
            }
            // cout << "\n";
        }
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-10 22:45:00
