#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll powmod(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}

unsigned int A, B, C;
inline unsigned int rng61() {
    A ^= A << 16;
    A ^= A >> 5;
    A ^= A << 1;
    unsigned int t = A;
    A = B;
    B = C;
    C ^= t ^ A;
    return C;
}

const int N = 10100000;
int p, n, a[N];
ll s[N], t[N];

int main() {
    scanf("%d%d%u%u%u", &p, &n, &A, &B, &C);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        a[i] = rng61() % p;
    }
    s[0] = 1;
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1] * a[i] % p;
    }
    t[n] = powmod(s[n], p - 2, p);
    for (int i = n; i >= 1; i--) t[i - 1] = t[i] * a[i] % p;
    for (int i = 1; i <= n; i++) {
        int v = s[i - 1] * t[i] % p;
        ans ^= v;
    }
    cout << ans << "\n";


    return 0;
}
