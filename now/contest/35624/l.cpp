#include <iostream>

using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0 || n % 6 == 0 || n % 5 == 0 || n % 8 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
