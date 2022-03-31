#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        double len = sqrt(a * a + b * b);
        //cout << len << "\n";
        if (a == 0 && b == 0)
            cout << 0 << "\n";
        else if (len == ll(len))
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }

    return 0;
}
