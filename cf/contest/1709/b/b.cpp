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
int n, m;
ll a[N], b[N], c[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        b[i] = max(ll(0), a[i] - a[i + 1]);
    }
    for (int i = 1; i < n; i++) {
        b[i] += b[i - 1];
    }
    for (int i = n - 1; i >= 1; i--) {
        c[i] = max(ll(0), a[i + 1] - a[i]);
    }
    for (int i = n - 1; i >= 1; i--) {
        c[i] += c[i + 1];
    }
    // for (int i = 1; i < n; i++) cout << c[i] << " ";
    // cout << "\n";
    while (m--) {
        int x, y;
        cin >> x >> y;
        if (x < y) {
            ll ans = b[y - 1] - b[x - 1];
            cout << ans << "\n";
        } else {
            ll ans = c[y] - c[x];
            cout << ans << "\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-21 22:35:00
