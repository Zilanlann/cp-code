#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    ll k, n;
    cin >> k >> n;
    while (n--) {
        if (k < 50)
            k += k / 10 + 5;
        else
            k += 10;
    }
    cout << k << "\n";

    return 0;
}
