#include <iostream>

typedef long long ll;
using namespace std;

int n, m, f[2001], v[2001], w[2001], l[2001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    //多重背包二进制优化
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i] >> l[i];
    }
    for (int i = 1; i <= n; i++) {
        int res = l[i];
        for (int k = 1; k <= res; res -= k, k *= 2){
            for (int j = m; j >= v[i] * k; j--) {
                f[j] = max(f[j], f[j - v[i] * k] + w[i] * k);
            }
        }
        for (int j = m; j >= v[i] * res; j--) {
            f[j] = max(f[j], f[j - v[i] * res] + w[i] * res);
        }
    }
    cout << f[m] << endl;

    return 0;
}
