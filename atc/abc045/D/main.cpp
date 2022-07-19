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
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

map<pair<int, int>, int> ma;
int h, w, n;
ll ans[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> h >> w >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = max(a - 2, 1); j <= min(a, h - 2); j++) {
            for (int k = max(b - 2, 1); k <= min(b, w - 2); k++) {
                // cout << j << " " << k << "\n";
                ma[{j, k}]++;
            }
        }
    }
    for (auto [x, y] : ma) {
        ans[y]++;
    }
    ll tmp = 0;
    for (int i = 1; i < 10; i++) tmp += ans[i];
    ans[0] = ll(h - 2) * ll(w - 2) - tmp;
    for (int i = 0; i < 10; i++) cout << ans[i] << "\n";

    return 0;
}
