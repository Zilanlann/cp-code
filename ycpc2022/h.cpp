#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

const int maxn = 1e6 + 5;
vector<int> ve(maxn);
int n, maxx = 0;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

bool check(int mid) {
	bool tmp = false;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (ve[i] % mid == 0 && ve[j] % mid == 0) {
				tmp = true;
				break;
			}
		}
	}
	return tmp;
}

// void binary_search() {
// 	int l = 1, r = maxx + 1;
// 	while (l + 1 < r) {
// 		int mid = l + ((r - l) >> 1);
// 		cout << mid << " ";
// 		if (check(mid))
// 			l = mid;
// 		else
// 			r = mid;
// 	}
// 	cout << l << "\n";
// }

int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ve[i];
	}

	// binary_search();
	// int maxx = 0;
	// for (int i = 0; i < n; i++) {
	// 	for (int j = i + 1; j < n; j++) {
	// 		maxx = max(gcd(ve[i], ve[j]), maxx);
	// 	}
	// }
	// cout << maxx << "\n";
	sort(ve.begin() + 1, ve.begin() + 1 + n, greater<int>());
	for (int i = 1; i <= n; i++) {
		if (check(ve[i])) {
			cout << ve[i] << "\n";
			break;
		}
		if (i == n)
			cout << 1 << "\n";
	}

	return 0;
}