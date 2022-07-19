#include <iostream>
using namespace std;
typedef long long ll;

int w, h, n;

int main() {
    cin >> w >> h >> n;
    int l1 = 0, l2 = w, u = h, d = 0;
    for (int i = 0; i < n; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        if (k == 1)
            l1 = max(a, l1);
        else if (k == 2)
            l2 = min(a, l2);
        else if (k == 3)
            d = max(b, d);
        else
            u = min(b, u);
    }
    cout << max(0, l2 - l1) * max(0, u - d) << "\n";

    return 0;
}
