#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
            //cout << a[i][j];
        }
        //cout << endl;
    }
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= m - 1; j++){
            int tmp = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1] - 4 * '0';
            if (tmp == 3){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
