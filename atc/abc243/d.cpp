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

ll n, x, a[2] = {1, 0};
bool u = 1;
string s;
vector<int> ve;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n >> x >> s;
	rep(i, 0, n) {
		if (s[i] == 'L') ve.pb(1);
		else if (s[i] == 'R') ve.pb(2);
		else {
			if (!ve.empty()) ve.pop_back();
			else {
				x /= 2;
				if (x == 0) x = 1;
			}
		}
	}
	for (auto v : ve) {
		if (v == 1) x *= 2;
		else x = x * 2 + 1;
	}
	cout << x << "\n";

    return 0;
}
