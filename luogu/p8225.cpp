#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    vector<ll> ve;
    ll a = 1;
    for (int i = 0; i < 18; i++) {
        a *= 10;
        ve.push_back(a - 1);
    }
    int t;
    cin >> t;
    while (t--) {
        ll k, n;
        cin >> k >> n;
        string s = to_string(n);
        bool tmp = true;
        for (int i = k; i <= s.size(); i += k) {
            if (n % ve[k - 1] == 0) {
                cout << "aya";
                tmp = false;
                break;
            }
        }
        if (tmp)
            cout << "baka";
        cout << "\n";
    }

    return 0;
}
