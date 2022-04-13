#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m;
int a[300];
const ll mod = 1000000007;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	cin >> n >> m;
	for (int i = 0; i < n; i++) a[i] = 0;
	for (int i = n; i < n + m - 1; i++) a[i] = 1;
	int cnt = 0;
	bool flag = 1;
	while (flag) {
		int tmp = 2;
		for (int i = 0; i < n + m - 1; i++) {
			if (a[i] == 0) tmp *= 2;
			if (a[i] == 1) tmp--;
		}
		if (tmp == 1) {
			cnt++;
			cnt %= mod;
		}
		flag = next_permutation(a, a + n + m - 1);
	} 
	cout << cnt << "\n";

	return 0;
}
