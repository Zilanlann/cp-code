#include <bits/stdc++.h>

int main() {

    int n, p, a, cnt = 0;
    std::cin >> n >> p;
    while (n--) {
        std::cin >> a;
        if (a < p) cnt++;
    }
    std::cout << cnt << "\n";
    return 0;
}
