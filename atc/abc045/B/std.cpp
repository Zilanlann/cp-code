#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<string> ve(3);
inline void dfs(int a) {
    if (ve[a].empty()) {
        cout << char(a + 'A') << "\n";
        return;
    }
    int x = ve[a].back() - 'a';
    ve[a].pop_back();
    dfs(x);
    return;
}

int main() {
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        ve[i] = string(s.rbegin(), s.rend());
    }
    dfs(0);

    return 0;
}
