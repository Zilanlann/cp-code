#include <iostream>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    ll l, r, a, ans = 0;
    cin >> l >> r >> a;
    ans = r / a + r % a;
    if (r - r % a - 1 < l)
        cout << ans << endl;
    else
        cout << max((r - r % a - 1) / a + (r - r % a - 1) % a, ans) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
