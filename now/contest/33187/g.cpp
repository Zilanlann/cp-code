#include <bits/stdc++.h>

using namespace std;

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "1\n";

        }
        else if (n == 2) {
            cout << "1 2\n";

        }
        else if (n == 3) {
            cout << "1 3 2\n";

        }
        else if (n == 4) {
            cout << "2 1 4 3\n";

        }
        else {
            // int m = n / 3;
            // if (n % 3 == 2) {
            //     for (int i = (m + 1) * 2 + 1; i <= n; i++) cout << i << " ";
            //     for (int i = m + 2; i <= (m + 1) * 2; i++) cout << i << " ";
            //     for (int i = 1; i <= m + 1; i++) cout << i << " ";
            //     cout << "\n";
            // }
            // else {
            //     for (int i = m * 2 + 1; i <= n; i++) cout << i << " ";
            //     for (int i = m + 1; i <= m * 2; i++) cout << i << " ";
            //     for (int i = 1; i <= m; i++) cout << i << " ";
            //     cout << "\n";
            // }
            int m = sqrt(n);
            if (m != sqrt(n)) m++;
            int tmp = n;
            for (int i = n - n % m + 1; i <= n; i++) cout << i << " ";
            tmp -= n % m;
            while (tmp) {
                tmp -= m;
                for (int i = tmp + 1; i <= tmp + m; i++) cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}