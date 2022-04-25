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

const int maxn = 1e6 + 5;
int n, k, a[maxn], b[maxn], c[2 * maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n >> k;
	rep(i, 0, n) {
		cin >> a[i]; 
		b[i] = a[i] + k;
		c[a[i] + 1000000]++;
		c[b[i] + 1000000]++;
	}
	int tmp, maxx = 0;
	rep(i, 0, 2e6) {
		if (maxx > c[i]) {
			maxx = c[i];
			tmp = i - 1e6;
		}
	}
	
	

    return 0;
}
