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

const int N = 2e5 + 5;
ll a[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//IO

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool other = 0, zero = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[i] % 10 == 5 || a[i] % 10 == 0) zero = 1;
			else other = 1;
		}
		if (zero && other) {
			cout << "No\n";
			continue;
		}
		if (other) {
			for (int i = 1; i <= n; i++) {
				while (a[i] % 10 != 8) {
					a[i] += a[i] % 10;
				}
			}
			bool fl = 1;
			for (int i = 1; i < n; i++) {
				if (abs(a[i + 1] - a[i]) % 20 != 0) {
					fl = 0;
					break;
				}
			}
			if (fl) cout << "Yes\n";
			else cout << "No\n";
		}
		else if (zero) {
			for (int i = 1; i <= n; i++) {
				a[i] += a[i] % 10;
			}
			bool fl = 1;
			for (int i = 1; i < n; i++) {
				if (a[i] != a[i + 1]) {
					fl = 0;
					break;
				}
			}
			if (fl) cout << "Yes\n";
			else cout << "No\n";
		}
	}

    return 0;
}

//handle:Chrisann
//date:2022-08-01 22:35:01