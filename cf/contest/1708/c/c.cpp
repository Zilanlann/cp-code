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

const int N = 1e5 + 5;
int a[N], b[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++) cin >> a[i];
        b[n] = 1;
        for (int i = n - 1; i >= 1; i--) {
            if (a[i] > b[i + 1]) b[i] = b[i + 1] + 1;
            else b[i] = b[i + 1];
        }
        bool fl = 0;
        for (int i = 1; i <= n; i++) {
            if (q >= b[i]) fl = 1;
            if (fl) cout << 1;
            else {
                if (a[i] <= q) cout << 1;
                else cout << 0;
            }
        }
        cout << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 22:35:35
