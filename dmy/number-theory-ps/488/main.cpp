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
        ll m;
        cin >> a >> b >> m;
        int d = exgcd(a, b, x, y);
        if (m % d != 0) {
            cout << "-1\n";
            continue;
        }
        a /= d;
        b /= d;
        m /= d;
        ll xx = (ll)x * (m % b) % b;
        if (xx < 0) xx += b;
        ll yy = (m - a * xx) / b;
        if (yy < 0) {
            cout << "-1\n";
        } else {
            cout << (ll)xx << " " << (ll)yy << "\n";
        }
    }

    return 0;
}
