#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    if ((s.size() % 2 == 0 && s[0] != s.back()) || (s.size() % 2 != 0 && s[0] == s.back()))
        cout << "Second\n";
    else
        cout << "First\n";

    return 0;
}
