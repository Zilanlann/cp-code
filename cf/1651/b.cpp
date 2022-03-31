#include <iostream>
#include <cmath>

#define ll int64_t
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    if (n <= 19){
        cout << "YES" << endl;
        ll ans;
        for (int i = 0; i < n; i++){
            ans = pow(3, i);
            cout << ans << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
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
