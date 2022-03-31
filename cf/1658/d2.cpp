#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    vector<int> ve(20, 0), ve2(20, 0);
    for (int i = l; i <= r; i++) {
        int a, j = 0;
        cin >> a;
        while (a > 0) {
            ve2[j++] += (a & 1);
            a >>= 1;
        }
    }
    for (int i = l; i <= r; i++) {
        int k = 0;
        int b = i;
        while (b > 0) {
            ve[k++] += (b & 1);
            b >>= 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < 20; i++) {
        if (ve[i] != ve2[i])
            ans |= (1 << i);
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
