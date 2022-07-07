#include <bitset>
#include <iostream>
using namespace std;
typedef long long ll;



int main() {
    ll l, r;
    cin >> l >> r;
    bitset<64> a = l, b = r, ans;
    int n = -1, m = -1;
    for (int i = 63; i >= 0; i--) {
        if (a[i] != 0 && n == -1) n = i;
        if (b[i] != 0 && m == -1) m = i;
        if (n != -1 && m != -1) break;
    }
    // cout << a << "\n" << b << "\n";
    if (m > n) cout << ((1ll << m + 1) - 1) << "\n";
    if (m == n) {
        bool fl = 0;
        for (int i = m; i >= 0; i--) {
            ans[i] = a[i] ^ b[i];
            if (b[i] == 1 && a[i] == 0) {
                fl = 1;
            }
            if (fl) ans[i] = 1;
        }
        cout << ans.to_ullong() << "\n";
    }

    return 0;
}
