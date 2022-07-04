#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 2e5 + 5;
ll n, q;
ll a[maxn];

int main() {
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    while (q--) {
        ll x, ans = 0;
        cin >> x;
        ll pos = lower_bound(a, a + n, x) - a;
        if (pos == n - 1) {
            ans = n * x - a[n - 1];
        } else if (pos == 0) {
            ans = a[n - 1] - n * x;
        } else {
            ans = pos * x - a[pos - 1] + a[n - 1] - a[pos - 1] - (n - pos) * x;
        }
        cout << ans << "\n";
    }

    return 0;
}
