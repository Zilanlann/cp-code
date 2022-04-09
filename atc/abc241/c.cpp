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

int n, a[1001][1001];

void solve() {
	rep(i, 0, n) {
		rep(j, 0, n - 5) {
			int cnt = 0;
			rep(k, j, j + 6) {
				cnt += a[i][k];
			}
			if (cnt >= 4) {cout << "Yes"; return;}
		}
	}
	rep(i, 0, n) {
		rep(j, 0, n - 5) {
			int cnt = 0;
			rep(k, j, j + 6) {
				cnt += a[k][i];
			}
			if (cnt >= 4) {cout << "Yes"; return;}
		}
	}
	rep(i, 0, n - 5) {
		rep(j, 0, n - 5) {
			int cnt = 0;
			rep(k, 0, 6) {
				cnt += a[i + k][j + k];
			}
			if (cnt >= 4) {cout << "Yes"; return;}
		}
	}
	rep(i, 5, n) {
		rep(j, 0, n - 5) {
			int cnt = 0;
			rep(k, 0, 6) {
				cnt += a[i - k][j + k];
			}
			if (cnt >= 4) {cout << "Yes"; return;}
		}
	}
	cout << "No";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n;
	rep(i, 0, n) {
		rep(j, 0, n) {
			char c;
			cin >> c;
			if (c == '.') a[i][j] = 0;
			else a[i][j] = 1;
		}
	}
	solve();

    return 0;
}
