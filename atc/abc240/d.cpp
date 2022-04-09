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

int n;
vector<pair<int, int>> ve;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	ve.pb(mp(0, 1));
	rep(i, 0, n) {
		int a;
		cin >> a;
		if (a != ve.back().fi) {
			ve.pb(mp(a, 1));
		}
		else {
			ve.pb(mp(a, ve.back().se + 1));
		}
		while (ve.back().fi == ve.back().se) {
			int b = ve.back().fi;
			rep(i, 0, b) ve.pop_back();
		}
		cout << SZ(ve) - 1 << "\n";
	}

    return 0;
}
