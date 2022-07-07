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
// head

const int maxn = 1e5 + 10;
const ll mod = 1e9 + 7;
int a[maxn], pos[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        ll ans = 1;
        ll l = pos[0], r = pos[0];
        for (int i = 1; i < n; i++) {
            if (pos[i] < l) {
                l = pos[i];
            } else if (pos[i] > r) {
                r = pos[i];
            } else {
                ans *= (r - l - i + 1);
                ans %= mod;
            }
        }
        cout << ans << "\n";
    }



    return 0;
}

// handle:Chrisann
// date:2022-07-05 15:03:03
