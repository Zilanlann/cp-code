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
const ll mod = 1000000007;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

const int maxn = 2e5 + 5;
ll a[maxn], b[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    ll n, k;
    cin >> n >> k;
    ll ans = 5e18, tmp = 0;
    for (ll i = 0; i < n; i++) {
        if (i + 1 > k)
            break;
        ll x, y;
        cin >> x >> y;
        tmp += x;
        ans = min(ans, (k - i) * y + tmp);
        tmp += y;
    }
    cout << ans << "\n";

    return 0;
}
