#include <algorithm>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // IO

    std::string a, b;
    std::cin >> a >> b;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    int l = 0;
    while (l < a.size() && l < b.size()) {
        if (a[l] + b[l] - 2 * '0' >= 10) {
            std::cout << "Hard"
                      << "\n";
            return 0;
        }
        l++;
    }
    std::cout << "Easy"
              << "\n";

    return 0;
}
