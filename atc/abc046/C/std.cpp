#include <iostream>
using namespace std;
typedef long long ll;

int t;
ll ans, x = 1, y = 1;

int main() {
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll k = max((x + a - 1) / a, (y + b - 1) / b);
        x = k * a;
        y = k * b;
    }
    cout << x + y << "\n";

    return 0;
}
