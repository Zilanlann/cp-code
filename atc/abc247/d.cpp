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
vector<pair<ll, ll>> ve;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	ll pos = 0;
	while (t--) {
		ll op, x, c;
		cin >> op;
		if (op == 1) {
			cin >> x >> c;
			ve.pb(mp(c, x));
		}
		else {
			cin >> c;
			ll ans = 0;
			while (c) {
				if (ve[pos].fi > c) {
					ve[pos].fi -= c;
					ans += c * ve[pos].se;
					c = 0;
				}
				else if (ve[pos].fi == c) {
					ve[pos].fi -= c;
					ans += c * ve[pos].se;
					c = 0;
					pos++;
				}
				else {
					c -= ve[pos].fi;
					ans += ve[pos].se * ve[pos].fi;
					pos++;
				}
			}
			cout << ans << "\n";
		}
	}

    return 0;
}
