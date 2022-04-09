#include <bits/stdc++.h>

using namespace std;

int a, b;
vector<int> ve;

int main() {
	cin >> a >> b;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			ve.push_back(i * a + j * b);
		}
	}
	sort(ve.begin(), ve.end());
	for (int i = 1000; i >= 0; i--) {
		if (ve[i] - ve[i - 1] > 1) {
			cout << ve[i] - 1 << "\n";
			break;
		}
	}
	//for (auto v : ve) cout << v << " ";

	return 0;
}