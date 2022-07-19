#include <iostream>
using namespace std;
typedef long long ll;

ll a, b, x, cnt;

int main() {
    cin >> a >> b >> x;
    cnt = b / x - a / x;
    if (a % x == 0) cnt++;
    cout << cnt << "\n";

    return 0;
}
