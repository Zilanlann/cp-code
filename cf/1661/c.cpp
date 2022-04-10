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

const int maxn = 3e5 + 5;
ll t;
ll a[maxn];

ll solve(ll odd, ll even) {
	ll ans = 0;
	if (odd > even) ans = odd * 2 - 1;
	else if (odd == even) ans = even * 2;
	else {
		ll a = (even - odd) / 3;
		if ((even - odd) % 3 == 2) a++;
		odd += a * 2;
		even -= a;
		if (odd > even) ans = odd * 2 - 1;
		else ans = even * 2;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	while (t--) {
		ll n, maxx = 0;
		ll odd = 0, even = 0, ans = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> a[i];
			maxx = max(maxx, a[i]);
		}
		rep(i, 0, n) {
			odd += (maxx - a[i]) % 2;
			even += (maxx - a[i]) / 2;
		}
		//cout << odd << " " << even << " ";
		if (odd > even) {
			ll odd1 = 0, even1 = 0;
			maxx++;
			rep(i, 0, n) {
				odd1 += (maxx - a[i]) % 2;
				even1 += (maxx - a[i]) / 2;
			}
			//cout << odd << " " << even << "  " << odd1 << " " << even1 << "  ";
			ans = min(solve(odd, even), solve(odd1, even1));
		}
		else ans = solve(odd, even);
		cout << ans << "\n";
	}

    return 0;
}
