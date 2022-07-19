#include <cmath>
#include <iostream>
using namespace std;
typedef long long ll;

int n, k;

int main() {
    cin >> n >> k;
    int ans = pow(k - 1, n - 1) * k;
    cout << ans << "\n";

    return 0;
}
