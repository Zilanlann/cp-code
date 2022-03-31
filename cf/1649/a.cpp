#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

int a[105];

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        if (a[i] == 0){
            ans = i;
            break;
        }
    }
    for (int i = n; i >= 1; i--){
        if (a[i] == 0){
            ans = i - ans + 2;
            break;
        }
    }

    cout << ans << endl;
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
