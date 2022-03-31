#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

typedef long long ll;

using namespace std;

int n, t;
int a[300], f[300], b[300];

void solve() {
	int x;
	cin >> x;
	memset(b, 0, sizeof(b));
	for (int i = 1; i <= n; i++) {
		b[i] = abs(a[i] - x);
	}
	memset(f, 127, sizeof(f));
	for (int i = 1; i <= n; i++) {
		*lower_bound(f + 1, f + n + 1, b[i]) = b[i];
	}
	cout << lower_bound(f + 1, f + n + 1, 0x3f3f3f3f) - f - 1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> t;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (t--) {
		solve();
	}


	return 0;
}