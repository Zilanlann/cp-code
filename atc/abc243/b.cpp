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

int a[1001], b[1001], n, c, d;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) cin >> b[i];
	rep(i, 0, n) if (a[i] == b[i]) {c++; a[i] = 0; b[i] = 0;}
	sort(a, a + n);
	sort(b, b + n);
	rep(i, 0, n) {
		if (a[i] != 0) {
			auto iter = lower_bound(b, b + n, a[i]);
			if (iter != b + n && *iter == a[i]) d++;
		}
	}
	cout << c << "\n" << d;

    return 0;
}
