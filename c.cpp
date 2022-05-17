#include <iostream>

using namespace std;

int f() {
    static int i = 0;
    i++;
    return i;
}

int main() {
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;

    return 0;
}
