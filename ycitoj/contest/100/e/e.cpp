#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

const int maxn = 1e6 + 6;
int n, cnt;
vector<int> p;
vector<char> is_prime(maxn, '1');

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n;
    is_prime[0] = is_prime[1] = '1';
    for (int i = 2; i * i <= 1e6; i++) {
        if (is_prime[i] == '1') {
            for (int j = i * i; j <= 1e6; j += i) is_prime[j] = '0';
        }
    }
    for (int i = 2; i <= 1e6; i++) {
        if (is_prime[i] == '1') p.push_back(i);
    }
    int tmp = 0;
    // for (auto v : p) cout << v << " ";
    while (n > 1) {
        for (int i = tmp; i < p.size(); i++) {
            if (n % p[i] == 0) {
                n /= p[i];
                cnt++;
                break;
            } else
                tmp++;
        }
    }
    cout << cnt << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-17 14:58:50
