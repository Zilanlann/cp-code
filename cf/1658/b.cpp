#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

const ll mod = 998244353;

void solve() {
    ll n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << "\n";
        return;
    }
    n /= 2;
    ll ans = n;
    while (--n >= 1) {
        ans *= n;
        ans %= mod;
    }
    ans = ans * ans % mod;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
