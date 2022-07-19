#include <iostream>
using namespace std;
typedef long long ll;

string s;
int g;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'g') g++;
    }
    g -= (s.size() + 1) / 2;
    cout << g << "\n";

    return 0;
}
