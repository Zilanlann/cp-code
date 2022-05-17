#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, n;
        std::cin >> x >> n;
        if (n % 2 != 0) x = (x == 0 ? 1 : 0);
        std::cout << x << "\n";
    }
}
