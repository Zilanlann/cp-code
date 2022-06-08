#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if ((m - n) % 2 != 0) {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; i < n / 2; i++) {
        cout << "10";
    }
    if (n % 2 != 0) cout << '1';
    cout << string(m - n, '1');
    return 0;
}
