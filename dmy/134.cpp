#include <iostream>
#include <vector>
#include <cstring>

typedef long long ll;
using namespace std;

int n, m;
int f[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> n >> m;
    vector<pair<int, int>> ga[n];
    for (int i = 1; i <= m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        ga[x].push_back(make_pair(y, z));
    }
    memset(f, 127, sizeof(f));
    f[1] = 0;
    for (int i = 0; i < n; i++) {
        for (auto [a, b] : ga[i])
            f[a] = min(f[i] + b, f[a]);
    }
    cout << f[n] << "\n";

    return 0;
}
