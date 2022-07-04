#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<std::string> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0) {
                        continue;
                    }
                    std::string s;
                    for (int k = 0; k < n; k++) {
                        int x = (i + k * dx + n) % n;
                        int y = (j + k * dy + n) % n;
                        s += a[x][y];
                    }
                    ans = std::max(ans, std::stoll(s));
                }
            }
        }
    }

    std::cout << ans << "\n";

    return 0;
}
