#include <iostream>

typedef long long ll;

using namespace std;

const ll mod = 998244353;

ll cal(ll x) {
    x %= mod;
    x = (x * (x + 1) / 2) % mod;
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    ll n;
    cin >> n;
    ll ans = 0, p = 10;
    for (ll i = 1; i <= 18; i++) {
        ll l = p / 10;
        ll r = min(n, p - 1);
        if (l <= r) {
            ans = (ans + cal(r - l + 1)) % mod;
        }
        else {
            break;
        }
        p *= 10;
    }
    cout << ans << "\n";

    return 0;
}
