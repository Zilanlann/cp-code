#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, int>> lr, ud;
    int a, b, c, d, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        lr.push_back(make_pair(a, a + c));
        ud.push_back(make_pair(b, b + d));
    }
    int x, y, ans = -1;
    cin >> x >> y;
    for (int i = 0; i < lr.size(); i++) {
        if (x >= lr[i].first && x <= lr[i].second && y >= ud[i].first && y <= ud[i].second) ans = i + 1;    
    }
    cout << ans << "\n";
}
