#include <iostream>
using namespace std;
typedef long long ll;

int n, W;
int f[10000], w[10000], v[10000];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
        v[i] = w[i];
        W += w[i];
    }
    W /= 2;
    for (int i = 1; i <= n; i++)
        for (int l = W; l >= w[i]; l--) f[l] = max(f[l], f[l - w[i]] + v[i]);
    cout << f[W] << "\n";

    return 0;
}
