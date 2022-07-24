#include <bits/stdc++.h>
using namespace std;

int n;
string s, t;

int main() {

    cin >> n >> s >> t;
    // SIAJOIWUGB
    // IBUSJGWAOI
    int l, r;
    l = 0, r = n - 1;
    for (int i = n - 1; i; i--) {
        if (s[i] == t[n - 1]) {
            l = i;
            break;
        }
    }
    int pos = l, cnt = 0;
    while (l >= 0) {
        if (s[l] == t[r]) {
            r--, l--;
        } else
            cnt++, l--;
    }
    cout << n - pos + cnt - 1 << endl;
    
    return 0;
}