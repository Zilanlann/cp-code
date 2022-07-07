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

ll a[3], b[3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a + 3);
    for (int i = 1; i < 3; i++) b[i] = a[i] - a[i - 1];
    b[0] = a[0];
    ll ans = 0;
    ans += b[1];
    b[1] = 0;
    if (b[0] < b[2])
        cout << "-1\n";
    else {
        ans += b[2] * 2;
        b[0] -= b[2];
        ans += b[0];
        cout << ans << "\n";
    }



    return 0;
}
