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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    // for (int i = 1; i <= 9; i++) {
    // string in = to_string(i) + ".in";
    // string out = to_string(i) + ".out";
    // freopen(in.c_str(), "r", stdin);
    // freopen(out.c_str(), "w", stdout);
    // ll a, b;
    // cin >> a >> b;
    // ll ans1 = gcd(a, b);
    // ll ans2 = a * b / ans1;
    // cout << ans1 << "\n" << ans2 << "\n";
    // }
    ll a, b;
    cin >> a >> b;
    ll ans1 = gcd(a, b);
    ll ans2 = a * b / ans1;
    cout << ans1 << "\n" << ans2 << "\n";
    cout << a * b;

    return 0;
}
