#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 2;
    else{
        if (n % 3 == 0){
            for (int i = 1; i <= n / 3; i++){
                cout << 21;
            }
            cout << endl;
            return;
        }
        if (n % 3 == 1){
            for (int i = 1; i <= n / 3; i++)
                cout << 12;
            cout << 1;
        }
        else if (n % 3 == 2){
            for (int i = 1; i <= n / 3; i++){
                cout << 21;
            }
            cout << 2;
        }
    }
    cout << endl;
    return;
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
