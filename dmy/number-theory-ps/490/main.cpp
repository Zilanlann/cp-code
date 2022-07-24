#include <iostream>
using namespace std;
typedef long long ll;

const int maxn = 1e7 + 7;
int p, n;
ll inv[maxn];

int main() {
    cin >> p >> n;
    inv[1] = 1;
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        inv[i] = (p - p / i) * inv[p % i] % p;
        ans ^= inv[i];
    }
    cout << ans << "\n";


    return 0;
}
