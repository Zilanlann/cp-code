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

int t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	while (t--) {
		map<int, int> ma;
		int n;
		cin >> n;
		rep(i, 0, n - 1) {
			int a;
			cin >> a;
			ma[a]++;
		}
		ll ans = 0;
		for (auto v : ma) ans += v.se - 1;
		// for (auto v : ma) cout << v.se << " ";
		// 	cout << "\n";
		if (ans <= ma.size()) cout << ma.size() + 1 << "\n";
		else cout << ma.size() + 1 + (ans - ma.size() + 1 + 1) / 2 << "\n";
	}

    return 0;
}
