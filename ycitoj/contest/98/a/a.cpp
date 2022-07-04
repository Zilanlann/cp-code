#include <iostream>
using namespace std;
typedef long long ll;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if ((b <= c && b >= a) || (b <= a && b >= c))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
