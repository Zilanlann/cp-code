#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int a = stoi(s1.substr(4));
    int b = stoi(s2.substr(4));
    for (int i = a; i <= b; i++) {
        string year = to_string(i);
        reverse(year.begin(), year.end());
        
    }
}
