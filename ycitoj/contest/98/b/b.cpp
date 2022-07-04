#include <iostream>
using namespace std;
typedef long long ll;

char a, b, c;

int main() {
    cin >> a >> b >> c;
    int ans = a + b + c - 3 * '0';
    ans = ans * 100 + ans * 10 + ans;
    cout << ans << "\n";

    return 0;
}
