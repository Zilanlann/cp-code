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
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) {
    return mrand() % x;
}
ll powmod(ll a, ll b) {
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

const int maxn = 1e5 + 5;
int n, cnt;
int a[maxn];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
        if (a[x] >= 3 || a[0] >= 2) {
            cout << "0\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 2) cnt++;
    }
    cout << powmod(2, cnt) << "\n";


    return 0;
}
