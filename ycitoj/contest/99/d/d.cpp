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

int t, x, y;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        cin >> x >> y;
        int ans = 0;
        for (int i = 0; i <= x; i++) {
            int j;
            if (i == 0)
                j = 1;
            else
                j = 0;
            for (; j <= y; j++) {
                int tmp = 0;
                if ((i & j) == 0) tmp = log(i + j) / log(2) + 1;
                ans += tmp;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 15:03:55
