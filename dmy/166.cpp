#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int n, m, k, v[101], w[101], t[101], f[101][101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> v[i] >> w[i] >> t[i];
    }
    for (int i = 1; i <= n; i++) {
    	for (int j = m; j >= v[i]; j--) {
    		for (int x = k; x >= t[i]; x--) {
    			f[j][x] = max(f[j][x], f[j - v[i]][x - t[i]] + w[i]);
    		}
    	}
    }
    cout << f[m][k] << "\n";

    return 0;
}
