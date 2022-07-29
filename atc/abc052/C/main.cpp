#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

bool is_prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> p;

int main() {
    int n;
    cin >> n;
    ll ans = 1;
    //筛素数
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) p.push_back(i);
    }
    //唯一分解定理
    for (auto v : p) {
        ll cnt = 0;
        for (int i = 1; i <= n; i++) {
            int tmp = i;
            while (tmp % v == 0) {
                cnt++;
                tmp /= v;
            }
        }
        cnt++;
        ans = ans * cnt % mod;
    }
    cout << ans << "\n";

    return 0;
}
