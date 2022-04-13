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

int n, m, k, b;
bool a[1001][1001];
int vis[1001][1001];
map<int, int> ma;

void dfs(int x, int y, int& cnt) {
	if (vis[x][y] || a[x][y])
		return;
	vis[x][y] = b;
	rep(i, -1, 2) {
		rep(j, -1, 2) {
			if (i == 0 || j == 0 && i ^ j) {
				if (a[x + i][y + j]) cnt++;
			}
		}
	}
	rep(i, -1, 2) {
		rep(j, -1, 2) {
			if (i == 0 || j == 0 && i ^ j) {
				dfs(x + i, y + j, cnt);
			}
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> n >> m >> k;
	rep(i, 1, n + 1) {
		rep(j, 1, m + 1) {
			char c;
			cin >> c;
			a[i][j] = c == '*' ? 1 : 0;
		}
	}
	while (k--) {
		b++;
		int x, y;
		cin >> x >> y;
		int cnt = 0;
		if (vis[x][y]) {
			cout << ma[vis[x][y]] << "\n";
		}
		else {
			dfs(x, y, cnt);
			ma.insert(mp(b, cnt));
			cout << cnt << "\n";
		}
	}

    return 0;
}
