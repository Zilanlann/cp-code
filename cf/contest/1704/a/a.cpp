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
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string s1, s2;
		cin >> s1 >> s2;
		bool fl = 0;
		for (int i = 0; i <= n - m; i++) {
			if (s1[i] == s2[0]) {
				fl = 1;
				break;
			}
		}
		if (fl && s1.substr(n - m + 1, m - 1) == s2.substr(1, m - 1)) cout << "YES\n";
		else cout << "NO\n";
	}

    return 0;
}

//handle:Chrisann
//date:2022-07-31 22:17:40