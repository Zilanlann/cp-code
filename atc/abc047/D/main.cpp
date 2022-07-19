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

const int maxn = 1e5 + 5;
int n, t;
int a[maxn], b[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> a[i];
    b[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        b[i] = max(a[i], b[i + 1]);
    }
    int maxx = 0, cnt = 0;
    // for (int i = 0; i < n; i++) cout << b[i] << " ";
    for (int i = 0; i < n - 1; i++) {
        int tmp = b[i + 1] - a[i];
        if (maxx < tmp) {
            cnt = 1;
            maxx = tmp;
        } else if (maxx == tmp)
            cnt++;
    }
    cout << cnt << "\n";


    return 0;
}
