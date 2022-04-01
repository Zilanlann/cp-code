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

const int maxn = 2e5 + 5;
int t, a[26], b[maxn];
string s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	while (t--) {
		memset(b, 0, sizeof(b));
		memset(a, 127, sizeof(a));
		cin >> s;
		per(i, 0, SZ(s)) {
			if (a[s[i] - 'a'] >= 1 << 30) {b[i] = 0; a[s[i] - 'a'] = i;}
			else {b[i] = a[s[i] - 'a'] - i; a[s[i] - 'a'] = i;}
		}
		int cnt = 0, flag = 0;
		rep(i, 0, SZ(s)) {
			if (flag == 0) {
				if (b[i] == 1)
					i++;
				else if (b[i] == 0)
					cnt++;
				else flag = b[i];
			}
			else {
				if (flag == 1) {flag--;}
				else if (b[i] >= flag || b[i] == 0) {flag--; cnt++;}
				else if (b[i] < flag) {cnt++; flag = b[i];}
			}
		}
		cout << cnt << "\n";
	}

    return 0;
}
