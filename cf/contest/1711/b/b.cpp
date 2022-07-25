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

int t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> v(n + 1, 0), cnt(n + 1, 0);
		for (int i = 1; i <= n; i++) cin >> v[i];
		vector<pair<int, int>> ve;
		for (int i = 1; i <= m; i++) {
			int a, b;
			cin >> a >> b;
			ve.push_back({a, b});
			cnt[a]++, cnt[b]++;
		}
		if (m % 2 == 0) {
			cout << "0\n";
			continue;
		}
		int ans = 2e5;
		for (auto [a, b] : ve) {
			if ((cnt[a] + cnt[b]) % 2 == 0) {
				ans = min(ans, v[a] + v[b]);
			}
			if (cnt[a] % 2 != 0) ans = min(ans, v[a]);
			if (cnt[b] % 2 != 0) ans = min(ans, v[b]);
		}
		cout << ans << "\n";
	}

    return 0;
}

//handle:Chrisann
//date:2022-07-24 22:35:00