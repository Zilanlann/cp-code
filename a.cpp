#include <iostream>
using namespace std;

const int maxn = 20210605;
bool is_prime[maxn + 1];

bool check(int n) {
    while (n) {
        int a = n % 10;
        if (a == 2 || a == 3 || a == 5 || a == 7)
            ;
        else
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    memset(is_prime, 1, sizeof(is_prime));
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= maxn; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= maxn; j += i) is_prime[j] = 0;
        }
    }
    for (int i = 2; i <= maxn; i++) {
        if (is_prime[i] && check(i)) cout << i << "\n";
    }
}
