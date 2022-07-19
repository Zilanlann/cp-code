#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    int ans = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) ans++;
    }
    cout << ans << "\n";

    return 0;
}
