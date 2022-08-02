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
		string s;
		cin >> s;
		int n;
		cin >> n;
		map<string, int> ma;
		for (int i = 1; i <= n; i++) {
			string ss;
			cin >> ss;
			ma[ss] = i;
		}
		bool fl = 0;
		vector<pair<int, int>> ve;
		for (int i = 0; i < s.size(); i++) {
			int tmp = i - 1, x = i, y = i;
			for (int j = i; j >= max(0, i - 10); j--) {
				for (int k = 1; k <= 10; k++) {
					string ss = s.substr(j, k);
					if (ma.count(ss) && j + k - 1 > tmp) {
						tmp = j + k - 1;
						x = j + 1, y = ma[ss];
					}
				}
			}
			if (tmp < i) {
				fl = 1;
				break;
			}
			i = tmp;
			ve.push_back({x, y});
		}
		if (fl) cout << "-1\n";
		else {
			cout << ve.size() << "\n";
			for (auto [x, y] : ve) cout << y << " " << x << "\n";
		}
		
	}

    return 0;
}

//handle:Chrisann
//date:2022-08-01 22:35:01