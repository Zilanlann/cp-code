#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int exgcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = exgcd(b, a % b, x, y);
    int t = x;
    x = y;
    y = t - (a / b) * y;
    return d;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b;
        int d = exgcd(a, b, x, y);
        y = -y;
        if (x < 0 || y < 0) {
            x += b / d;
            y += a / d;
        }
        cout << x << " " << y << "\n";
    }

    return 0;
}
