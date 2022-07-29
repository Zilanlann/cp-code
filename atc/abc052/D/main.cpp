#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int N = 1e5 + 5;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n;
    ll x, y, ans = 0;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        ll tmp = abs(a[i + 1] - a[i]);
        ans += min(tmp * x, y);
    }
    cout << ans << "\n";

    return 0;
}

