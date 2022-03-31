#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 2e5 + 5;
int f[11][maxn], n, m;

void dp(){
    while (n != 0){
        f[n % 10][0]++;
        n /= 10;
    }
    cout << 1 << endl;
    for (int i = 1; i <= m; i++){
        for (int j = 10; j >= 0; j--){
            f[j][i] = f[j - 1][i - 1];
        }
        f[0][i] += f[10][i];
        f[1][i] += f[10][i];
    }
    ll ans = 0;
    for (int i = 0; i <= 9; i++){
        ans += f[i][m];
    }
    cout << ans << endl;
    memset(f, 0, sizeof(f));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        dp();
    }

    return 0;
}
