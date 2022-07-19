#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
int a[1001][100001];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v]++;
        a[v][u]++;
        if (a[u][v] > 1 || a[v][u] > 1) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}
