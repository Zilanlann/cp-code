#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c - a == 0) {
		cout << -1 << "\n";
		return;
	}
	int k = (d - b) / (c - a);
	cout << k << " " << b - k * a << "\n";
}

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}