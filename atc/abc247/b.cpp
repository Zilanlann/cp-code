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
vector<pair<string, string>> ve;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	rep(i, 0, n) {
		string s1, s2;
		cin >> s1 >> s2;
		ve.pb(mp(s1, s2));
	}
	rep(i, 0, n) {
		bool f1 = 1, f2 = 1;
		rep(j, 0, n) {
			if (i == j) continue;
			if (ve[i].fi == ve[j].fi || ve[i].fi == ve[j].se) f1 = 0;
			if (ve[i].se == ve[j].fi || ve[i].se == ve[j].se) f2 = 0;
		}
		if (f1 == 0 && f2 == 0) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";


    return 0;
}
