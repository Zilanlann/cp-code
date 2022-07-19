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
int a[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        set<int> vis;
        bool fl = 1;
        for (int i = n; i >= 1; i--) {
            int x = r % i;
            x = r - x;
            // cout << x << " ";
            while (vis.count(x)) {
                x -= i;
            }
            if (x < l) {
                fl = 0;
                break;
            } else {
                a[i] = x;
                vis.insert(x);
            }
        }
        if (fl) {
            cout << "YES\n";
            for (int i = 1; i <= n; i++) cout << a[i] << " ";
            cout << "\n";
        } else
            cout << "NO\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 22:35:35
