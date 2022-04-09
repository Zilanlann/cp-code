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

ll t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		map<ll, ll> ma;
		rep(i, 0, n) {
			ll a;
			cin >> a;
			ma[a]++;
		}
		ll maxx = 0;
		for (auto v : ma) maxx = max(maxx, v.se);
		if (maxx == n) cout << 0 << "\n";
		else {
			ll ans = 0;
			if (maxx >= 2) {
				ans += ((n - maxx) % 2 == 0 ? (n - maxx) / 2 + n - maxx : (n - maxx) / 2 * 3 + 2);
			}
			else {
				maxx = 2;
				ans += 2;
				ans += ((n - maxx) % 2 == 0 ? (n - maxx) / 2 + n - maxx : (n - maxx) / 2 * 3 + 2);
			}
			cout << ans << "\n";
		}
	}

    return 0;
}
