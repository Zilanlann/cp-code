#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << (2ll << (n - 1)) - 1 << endl;
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
