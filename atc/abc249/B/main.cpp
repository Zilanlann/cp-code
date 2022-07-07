#include <bits/stdc++.h>
#include <cctype>
#include <ios>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int>    VI;
typedef long long      ll;
typedef pair<int, int> PII;
typedef double         db;
mt19937                mrand(random_device{}());
const ll               mod = 1000000007;
int                    rnd(int x) {
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

string    s;
set<char> se;
bool      upper = 0, lower = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        se.insert(s[i]);
        if (isupper(s[i])) upper = 1;
        if (islower(s[i])) lower = 1;
    }
    if (upper && lower && se.size() == s.size())
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}
