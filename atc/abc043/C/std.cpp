#include <iostream>
using namespace std;
typedef long long ll;

int n, avg, x, y;
int a[200];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        avg += a[i];
    }
    avg /= n;
    for (int i = 0; i < n; i++) {
        x += (a[i] - avg) * (a[i] - avg);
        y += (a[i] - avg - 1) * (a[i] - avg - 1);
    }
    cout << min(x, y) << "\n";

    return 0;
}
