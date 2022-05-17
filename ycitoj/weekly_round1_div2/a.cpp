#include <bits/stdc++.h>

int main() {

    int n;
    std::cin >> n;
    if (n < 10) std::cout << "000";
    else if (n < 100) std::cout << "00";
    else if (n < 1000) std::cout << "0";
    std::cout << n << "\n";


    return 0;

}
