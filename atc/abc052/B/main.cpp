#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') tmp++;
        else tmp--;
        ans = max(tmp, ans);
    }
    cout << ans << "\n";

    return 0;
}

