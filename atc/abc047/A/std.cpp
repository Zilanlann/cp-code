#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (max({a, b, c}) * 2 == a + b + c)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
