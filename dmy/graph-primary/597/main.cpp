#include <bits/stdc++.h>
using namespace std;

int a[1001];
int n, m;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x]++, a[y]++;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << "\n";
    return 0;
}
