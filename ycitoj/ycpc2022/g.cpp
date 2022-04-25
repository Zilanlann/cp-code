#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int ans = 0;

void solve() {
	int a, b;
	cin >> a >> b;
	while (true) {
		for (int i = 1; i <= a; i++) {
			if (b >= a + (a + i - 1) / i) {
				a += (a + i - 1) / i;
				ans++;
				//cout << a << " ";
				break;
			}
		}
		if (a == b) 
			break;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		solve();
		cout << ans;
		if (t != 0)
			cout << "\n";
		ans = 0;
	}

	return 0;
}