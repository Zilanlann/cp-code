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

ll n, ans = 3e18;

ll func(ll a, ll b) {
	ll ans = a * a * a + a * a * b + b * b * a + b * b * b;
	return ans;
}

void bs1() {
	rep(i, 0, 1e6) {
		ll l = -1, r = 1e6;
		while (l + 1 < r) {
			ll mid = (l + ((r - l) >> 1));
			if (func(i, mid) >= n)
				r = mid;
			else
				l = mid;
		}
		ans = min(func(r, i), ans);
	}
	
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	bs1();
	cout << ans << "\n";

    return 0;
}
