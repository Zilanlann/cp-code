#include <iostream>

using namespace std;

int main() {
    //输出从1到100000的素数，而且时间复杂度为O(n)
    int n = 100000;
    bool *is_prime = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        if (is_prime[i]) {
            cout << i << endl;
        }
    }
    return 0;
    
}