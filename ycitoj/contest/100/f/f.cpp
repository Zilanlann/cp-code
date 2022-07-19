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

const int maxn = 1e7 + 6;
vector<int> p;
vector<char> is_prime(maxn, '1');
int a[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    is_prime[0] = is_prime[1] = '1';
    for (int i = 2; i * i <= 1e7; i++) {
        if (is_prime[i] == '1') {
            for (int j = i * i; j <= 1e7; j += i) is_prime[j] = '0';
        }
    }
    for (int i = 2; i <= 1e7; i++) {
        if (is_prime[i] == '1') p.push_back(i);
    }
    for (int i = 2; i <= 1e5; i++) {
        int n = i;
        if (a[n] == 0) {
            int cnt = 0, tmp = 0;
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
            for (auto v : p) {
                for (ll j = i, mm = cnt; j <= 1e5; j *= v) {
                    // cout << j << "\n";
                    assert(j >= 1 && j <= 1e7);
                    a[j] = mm++;
                }
            }
        }
    }
    while (t--) {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-17 14:58:50
