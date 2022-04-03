#include <iostream>

typedef long long ll;
#define endl "\n"

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--) {
        ll ans;
        cin >> ans;
        cout << 2 * ans - 1 << endl;
    }

    return 0;
}
