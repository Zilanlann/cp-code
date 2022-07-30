#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

int a[200][200], f[200][200][200];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    int n, m;
    cin >> n >> m;
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= m; i++) {
        int l, r, v;
        cin >> l >> r >> v;
        f[0][l][r] = v;
        f[0][r][l] = v;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                f[k][i][j] = min(f[k - 1][i][j], f[k - 1][i][k] + f[k - 1][k][j]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (f[0][i][j] > 1000) continue;
            if (f[0][i][j] > f[n][i][j]) {
                ans++;
            }
            // cout << f[n][i][j] << " ";
        }
        // cout << "\n";
    }
    cout << ans / 2 << "\n";
    

    return 0;
}
