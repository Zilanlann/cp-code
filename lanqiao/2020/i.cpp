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
// mt19937 mrand(random_device{}()); 
// const ll mod=1000000007;
// int rnd(int x) { return mrand() % x;}
// ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

int n;
set<pair<int, int> > s;
ll ans, cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		s.insert(mp(a, b));
	}
	vector<pair<int, int> > a(all(s));
	rep(i, 0, a.size()) {
		set<pair<db, db> > d;
		rep(j, 0, i) {
			if (a[i].fi != a[j].fi) {
				db x = (a[i].se - a[j].se) / (a[j].fi - a[i].fi);
				db y = (a[i].se * a[j].fi - a[j].se * a[i].fi) / (a[j].fi - a[i].fi);
				d.insert(mp(x, y));
			}
		}
		cnt += d.size() + 1;
	}
	cout << ans + cnt + 1 << "\n";



    return 0;
}
