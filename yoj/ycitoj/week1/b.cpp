#include <iostream>
#include <cmath>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    ll m, n;
    cin >> m >> n;
    if (m == 1){
        if (n == 0)
            cout << 1 << endl;
        else if (n == 1)
            cout << 2 << endl;
        return;
    }
    ll ans = pow(2, m);
    if (n == 0)
        cout << ans << endl;
    else
        cout << ans - 1 << endl;

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
