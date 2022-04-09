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

int a[4], v[100], f[100], ans = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	rep(i, 0, 4) cin >> a[i];
	rep(i, 0, 4) {
		int n = a[i];
		int m = 0;
		memset(v, 0, sizeof(v));
		memset(f, 0, sizeof(f));
		rep(j, 1, n + 1) {
			cin >> v[j];
			m += v[j];
		}
		rep(j, 1, n + 1) {
			rep(k, v[i], m / 2 + 1) 
				f[k] = max(f[k], f[k - v[j]] + v[j]);
		}
		ans += m - f[m / 2];
	}
	cout << ans << "\n";



    return 0;
}
