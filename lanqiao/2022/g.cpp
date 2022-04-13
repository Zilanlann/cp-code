#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mod = 1000000007;
const int maxn = 1e7 + 5;
ll n, f[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	cin >> n;
	f[1] = 1, f[2] = 2, f[3] = 5;
	for (int i = 4; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2] + f[i - 3] + 1;
		f[i] %= mod;
	}
	cout << f[n] << "\n";
	

	return 0;
}
