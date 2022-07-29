#include <iostream>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n;
    ll x, y, ans = 0;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        ll tmp = abs(a[i + 1] - a[i]);
        ans += min(tmp * x, y);
    }
    cout << ans << "\n";

    return 0;
}

