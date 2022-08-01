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
int a[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int l = a[1] - x, r = a[1] + x;
		int cnt = 0;
		for (int i = 2; i <= n; i++) {
			int a1 = l, a2 = r;
			int b1 = a[i] - x, b2 = a[i] + x;
			if (b2 >= a1 && a2 >= b1) {
				l = max(a1, b1), r = min(a2, b2);
			}
			else {
				cnt++;
				l = b1, r = b2;
			}
		}
		cout << cnt << "\n";
	}	

    return 0;
}

//handle:Chrisann
//date:2022-07-31 22:17:40