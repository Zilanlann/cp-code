#include <iostream>
using namespace std;
typedef long long ll;

string s, ans;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            ans += '0';
        else if (s[i] == '1')
            ans += '1';
        else if (!ans.empty())
            ans.pop_back();
    }
    cout << ans << "\n";

    return 0;
}
