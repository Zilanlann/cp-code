#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 0; i--) {

        int a;
        cin >> a;

        if (i == n) {
            if (a < 0)
                cout << '-';
        }
        else if (a < 0) cout << '-';
        else if (a > 0) cout << '+';
        
        if (a != 1 && a != -1 && a != 0) cout << abs(a);

        if (a != 0) {
            if (i > 1) cout << "x^" << i;
            else if (i == 1) cout << "x";
            else if (i == 0 && abs(a) == 1) cout << abs(a);
        }
    }

    return 0;
}
