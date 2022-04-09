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
typedef long long ll;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int maxn = 1e6 + 5;
int n, f[10], g[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	rep(i, 1, 10) f[i] = 1;
	rep(i, 1, n) {
		rep(j, 1, 10) {
			rep(k, j - 1, j + 2) {
				if (k >= 1 && k <= 9) {
					g[j] += f[k];
					g[j] %= 998244353;
				}
			}
		}
		memcpy(f, g, sizeof(g));
		memset(g, 0, sizeof(g));
		//rep(j, 1, 10) cout << f[j] << " ";
	}
	ll ans = 0;
	rep(i, 1, 10) ans += f[i];
	cout << ans % 998244353 << "\n";

    return 0;
}
