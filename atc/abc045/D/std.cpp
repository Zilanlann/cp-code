#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

map<pair<int, int>, int> ma;
int h, w, n;
ll ans[10];

int main() {
    cin >> h >> w >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = max(a - 2, 1); j <= min(a, h - 2); j++) {
            for (int k = max(b - 2, 1); k <= min(b, w - 2); k++) {
                ma[{j, k}]++;
            }
        }
    }
    for (auto [x, y] : ma) {
        ans[y]++;
    }
    ll tmp = 0;
    for (int i = 1; i < 10; i++) tmp += ans[i];
    ans[0] = ll(h - 2) * ll(w - 2) - tmp;
    for (int i = 0; i < 10; i++) cout << ans[i] << "\n";


    return 0;
}
