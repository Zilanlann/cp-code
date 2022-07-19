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

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        char a[n + 1][n + 1];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }
        double x;
        if (n % 2 == 0)
            x = n / 2 + 0.5;
        else
            x = (n + 1) / 2;
        for (int i = 1; i < x; i++) {
            for (int j = 1; j <= x; j++) {
                int cnt = 0;
                double dx = abs(x - i), dy = abs(x - j);
                // cout << dx << " " << dy << "\n";
                cnt += a[int(x + dx)][int(x - dy)];
                cnt += a[int(x + dy)][int(x + dx)];
                cnt += a[int(x - dx)][int(x + dy)];
                cnt += a[int(x - dy)][int(x - dx)];
                cnt -= 4 * '0';
                // cout << cnt << " ";
                ans += min(cnt, 4 - cnt);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-12 22:35:59
