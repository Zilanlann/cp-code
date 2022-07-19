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

const int maxn = 2e5 + 5;
int t;
int a[maxn], b[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        ll ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] < i)
                b[i] = 1;
            else
                b[i] = 0;
            b[i] += b[i - 1];
        }
        for (int i = 2; i <= n; i++) {
            if (a[i] < i) {
                ans += b[max(0, a[i] - 1)];
                // cout << b[max(0, a[i] - 1)] << " ";
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
// handle:Chrisann
// date:2022-07-12 22:35:59
