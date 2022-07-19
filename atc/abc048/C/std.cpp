#include <iostream>
using namespace std;
typedef long long ll;

int n, x;
int a[100005];
ll ans;

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        if (a[i - 1] + a[i] > x) {
            ans += a[i - 1] + a[i] - x;
            a[i] -= a[i - 1] + a[i] - x;
        }
        a[i] = max(0, a[i]);
    }
    cout << ans << "\n";

    return 0;
}
