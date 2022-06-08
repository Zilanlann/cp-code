#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) {
        if (sqrt(n + i * i) == int(sqrt(n + i * i))) {
            cout << "YES\n";
            return 0;
        }
    } 
    cout << "NO\n";
    return 0;
}
