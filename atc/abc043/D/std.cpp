#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    if (s.size() == 2) {
        if (s[0] == s[1])
            cout << "1 2\n";
        else
            cout << "-1 -1\n";
        return 0;
    }
    for (int i = 0; i <= s.size() - 3; i++) {
        if (s[i] == s[i + 1] || s[i] == s[i + 2] || s[i + 1] == s[i + 2]) {
            cout << i + 1 << " " << i + 3 << "\n";
            return 0;
        }
    }
    cout << "-1 -1\n";

    return 0;
}
