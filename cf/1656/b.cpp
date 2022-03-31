#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ve(n);
    for (auto& v : ve) {
        cin >> v;
    }
    sort(ve.begin(), ve.end());
    for (int i = 0; i < n; i++) {
        int a = ve[i] - k;
        auto iter = lower_bound(ve.begin(), ve.end(), a);
        if (iter != ve.end() && *iter == a) {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
    
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
