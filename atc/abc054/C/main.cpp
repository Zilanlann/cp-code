#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    for (int i = 3; i <= 10; i++) {
        startTest(i);
        cout << rnd.next(1, 1000) << " ";
        cout << rnd.next(2, 1000) << "\n";
    }
}