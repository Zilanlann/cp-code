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

map<string, int> ma;
int t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	ma.insert(mp("bool", 1));
	ma.insert(mp("char", 1));
	ma.insert(mp("int", 4));
	ma.insert(mp("long long", 8));
	ma.insert(mp("__int128", 16));
	ma.insert(mp("float", 4));
	ma.insert(mp("double", 8));
	ma.insert(mp("long double", 16));
	cin >> t;
	rep(k, 0, t) {
		int n;
		ll ans = 0;
		cin >> n;
		rep(i, 0, n) {
			string s1, s2;
			cin >> s1 >> s2;
			if (s1 == "long" && (s2 == "long" || s2 == "double")) {
				string s3;
				cin >> s3;
				int l = 0, r;
				rep(i, 0, SZ(s3)) {
					if (s3[i] == '[') l = i;
					if (s3[i] == ']') r = i;
				}
				if (l == 0) ans += ma[s1 + " " + s2];
				else {
					int a = stoi(s3.substr(l + 1, r - l - 1));
					ans += a * ma[s1 + " " + s2];
				}
			}
			else {
				int l = 0, r;
				rep(i, 0, SZ(s2)) {
					if (s2[i] == '[') l = i;
					if (s2[i] == ']') r = i;
				}
				if (l == 0) ans += ma[s1];
				else {
					int a = stoi(s2.substr(l + 1, r - l - 1));
					ans += a * ma[s1];
				}
			}
		}
		cout << "Case #" << k + 1 << ": " << (ans + 1024 - 1) / 1024 << "\n";
	}

    return 0;
}
