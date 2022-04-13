#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	//freopen("dout.txt", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << max(i - 1, n - i) * 2 << "\n";
	}

	return 0;
}
