#include <iostream>

typedef long long ll;
using namespace std;

int n, m, f[1001], v[1001], w[1001], l[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i] >> l[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= l[i]; k++){
            for (int j = m; j >= v[i]; j--) {
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
        }
    }
    cout << f[m] << endl;

    return 0;
}
