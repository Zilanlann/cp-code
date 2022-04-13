#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

string s;
int t;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    freopen("A10.in", "r", stdin);
    freopen("A10.out", "w", stdout);

    cin >> s;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        string cp = s.substr(0, l - 1);
        k %= r - l + 1;
        cp += s.substr(r - l + 1 - k + l - 1, k);
        cp += s.substr(l - 1, r - l + 1 - k);
        cp += s.substr(r, s.size() - r);
        s = cp;
    }
    cout << s;

    return 0;
}
