#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> ve(n);
    for (auto& v : ve) std::cin >> v;
    int l = 0, r = n - 1;
    while (l < n || r >= 0) {
        if (l < n) std::cout << ve[l] << " ";
        if (r >= 0) std::cout << ve[r] << " ";
        l += 2, r -= 2;
    }

    return 0;
}
