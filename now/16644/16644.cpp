#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    string s, ans;
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3 >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && i < s.size() - 1 && s[i] == '-' && s[i + 1] - s[i - 1] >= 1 && ((isdigit(s[i - 1]) && isdigit(s[i + 1])) || (islower(s[i - 1]) && islower(s[i + 1]))) ) {
            string tmp;
            for (int j = s[i - 1] + 1; j < s[i + 1]; j++) {
                if (p1 == 3)
                    tmp += string(p2, '*');
                else if (isalpha(s[i - 1])) {
                    if (p1 == 2)
                        tmp += string(p2, toupper(char(j)));
                    else
                        tmp += string(p2, tolower(char(j)));
                } else
                    tmp += string(p2, char(j));
            }
            if (p3 == 2)
                reverse(tmp.begin(), tmp.end());
            ans += tmp;
        } else
            ans += s[i];
    }
    cout << ans << "\n";

    return 0;
}
