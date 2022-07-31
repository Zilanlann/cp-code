#include <bits/stdc++.h>
using namespace std;
// head

int a[5] = {1, 3, 3, 3, 5};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    srand(time(0));
    int t = 1000;
    while (t--) {
        int i = rand() % 4;
        int x = a[i] & a[i + 1];
        int y = a[i] | a[i + 1];
        a[i] = x, a[i + 1] = y;
        double ans = 0;
        for (int i = 0; i < 5; i++) {
            ans += a[i];
        }
        ans /= 5;
        double tmp = 0;
        for (int i = 0; i < 5; i++) {
            double x = abs(a[i] - ans) * abs(a[i] - ans);
            tmp += x;
        }
        tmp /= 5;
        cout << tmp << " ";
        for (int i = 0; i < 5; i++) cout << a[i] << " ";
        cout << "\n";
    }
    for (int i = 0; i < 5; i++) cout << a[i] << " ";

    return 0;
}

// handle:Chrisann
// date:2022-07-30 12:19:14