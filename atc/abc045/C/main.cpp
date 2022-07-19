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
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

vector<ll> dp[11];
string s;
ll ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s;
    dp[0].push_back(0);
    for (int i = 1; i <= s.size(); i++) {
        ll x = stoll(s.substr(0, i));
        // cout << x << " ";
        for (int j = 0; j < i; j++) {
            for (auto v : dp[j]) {
                dp[i].push_back(v + x);
            }
            x -= pow(10, i - j - 1) * (s[j] - '0');
            // cout << x << " ";
        }
        // cout << "\n";
    }
    for (auto v : dp[s.size()]) ans += v;
    cout << ans << '\n';

    return 0;
}
