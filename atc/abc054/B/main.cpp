#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

char a[100][100], b[100][100];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> b[i][j];
        }
    }
    bool fl = 0;
    for (int i = 1; i <= n - m + 1; i++) {
        for (int j = 1; j <= n - m + 1; j++) {
            bool tmp = 1;
            for (int x = i; x <= i + m - 1; x++) {
                for (int y = j; y <= j + m - 1; y++) {
                    // cout << x - i + 1 << "-" << y - j + 1 << " ";
                    if (a[x][y] != b[x - i + 1][y - j + 1]) {
                        tmp = 0;
                    }
                }
                // cout << "\n";
            }
            if (tmp) fl = 1;
        }
    }
    cout << (fl ? "Yes\n" : "No\n");

    return 0;
}
