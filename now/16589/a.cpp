#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> m >> n;
    vector<int> dict, ve(n);
    for (auto & v : ve) cin >> v;
    for (auto v : ve) {
        bool fl = 1;
        for (auto a : dict) {
            if (a == v) fl = 0;
        }
        if (fl) {
            if (dict.size() < m) dict.push_back(v);
            else {
                dict.erase(dict.begin());
                dict.push_back(v);
            }
            ans++;
        }
    }
    cout << ans << "\n";
}
