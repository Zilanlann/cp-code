#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ve;
    bool odd = true, is1 = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
            ve.push_back(a);
        if (a == 1)
            is1 = true;
        if (a % 2 == 0)
            odd = false;
    }
    if (is1) {
        if (odd)
            cout << "YES" << "\n";
        else {
            sort(ve.begin(), ve.end(), greater<int>());
            for (int i = 0; i < ve.size() - 1; i++) {
                if (ve[i] - ve[i + 1] == 1) {
                    cout << "NO" << "\n";
                    return;
                }
            }
            cout << "YES" << "\n";
        }
    }
    else
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
