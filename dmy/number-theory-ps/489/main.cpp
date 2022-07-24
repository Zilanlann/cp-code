#include <iostream>
using namespace std;
typedef long long ll;


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int phin = n;
        for (int d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                phin = phin / d * (d - 1);
                while (n % d == 0) n /= d;
            }
        }
        if (n != 1) {
            phin = phin / n * (n - 1);
        }
        cout << phin << "\n";
    }

    return 0;
}
