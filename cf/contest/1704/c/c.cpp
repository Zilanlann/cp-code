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

const int N = 1e5 + 5;
int a[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//IO

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= m; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + m + 1);
		vector<int> ve;
		for (int i = 1; i < m; i++) {
			ve.push_back(a[i + 1] - a[i] - 1);
		}
		ve.push_back(a[1] + n - a[m] - 1);
		int day = 0;
		ll ans = 0;
		sort(ve.begin(), ve.end(), greater<int>());
		for (auto v : ve) {
			int tmp = v - day * 2;
			if (tmp >= 2) {
				ans += tmp - 1;
				day += 2;
			}
			else if (tmp == 1) {
				ans++;
				day++;
			}
			else {
				break;
			}
		}
		cout << n - ans << "\n";
	}

    return 0;
}

//handle:Chrisann
//date:2022-07-31 22:17:40