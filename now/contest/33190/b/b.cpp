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
ll a[N], n, m;

bool check(ll k) {
	vector<ll> ve;
	for (ll i = 1; i <= n; i++) {
		ve.push_back(i * k + a[i]);
	}
	sort(ve.begin(), ve.end());
	ll tmp = 0;
	for (ll i = 0; i < k; i++) {
		tmp += ve[i];
	}
	return tmp <= m;
}

void bs() {
	ll l = 0, r = n;
	while (l + 1 < r) {
		ll mid = l + (r - l >> 1);
		if (check(mid)) l = mid;
		else r = mid;
	}
	cout << l << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//IO

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	bs();
	
    return 0;
}

//handle:Chrisann
//date:2022-08-01 12:26:49