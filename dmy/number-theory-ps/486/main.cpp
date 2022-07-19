#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll d = gcd(a, b);
        cout << d << " " << a / d * b << "\n";
    }

    return 0;
}
