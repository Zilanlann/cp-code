#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    vector<int> ve;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            ve.push_back(i + 1);
    }
    ll ans = 0;
    for (int i = 1; i < ve.size(); i++) {
        if (ve[i] - ve[i - 1] == 1)
            ans += 2;
        else if (ve[i] - ve[i - 1] == 2)
            ans += 1;
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
