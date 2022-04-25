#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> ve(n);
	for (auto& v : ve)
		cin >> v;
	int a = 0, b = 0;
	sort(ve.begin(), ve.end());
	for (int i = 1; i <= n; i++) {
		auto iter = lower_bound(ve.begin(), ve.end(), abs(a - b));
		if (a < b)
			a += *iter;
		else
			b += *iter;
		*iter = -1;
	}
	cout << abs(a - b) << "\n";

	return 0;
}