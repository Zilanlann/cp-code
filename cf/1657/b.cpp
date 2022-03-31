#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        int n, b, x, y;
        cin >> n >> b >> x >> y;
        ll ans = 0, tmp = 0;
        for (int i = 0; i < n; i++) {
            if (tmp + x <= b) {
                tmp += x;
            }
            else {
                tmp -= y;
            }
            ans += tmp;
        }
        cout << ans << "\n";
    }

    return 0;
}
