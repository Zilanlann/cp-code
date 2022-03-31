#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) {
        cin >> v;
        if (v == 1)
            cnt++;
    }
    ve.push_back(ve[0]);
    if (cnt != 1) {
        cout << "NO" << "\n";
        return;
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (ve[i] - ve[i - 1] > 1) {
                cout << "NO" << "\n";
                return;
            }
            else if (ve[i - 1] == n && ve[i] != 1) {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
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
