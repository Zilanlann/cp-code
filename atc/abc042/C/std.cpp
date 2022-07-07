#include <iostream>
using namespace std;
typedef long long ll;

int k, n, vis[10];

int main() {
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vis[a] = 1;
    }
    while (1) {
        bool fl = 1;
        string s = to_string(k);
        for (int i = 0; i < s.size(); i++) {
            if (vis[s[i] - '0']) fl = 0;
        }
        if (fl) {
            cout << k << "\n";
            break;
        }
        k++;
    }

    return 0;
}
