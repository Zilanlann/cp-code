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

int w, h, n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> w >> h >> n;
    int l1 = 0, l2 = w, u = h, d = 0;
    for (int i = 0; i < n; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        if (k == 1)
            l1 = max(a, l1);
        else if (k == 2)
            l2 = min(a, l2);
        else if (k == 3)
            d = max(b, d);
        else
            u = min(b, u);
    }
    cout << max(0, l2 - l1) * max(0, u - d) << "\n";

    return 0;
}
