#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> ve1(n);
	vector<int> ve2(n);
	for (int i = 0; i < n; i++) {
		cin >> ve1[i] >> ve2[i];
	}
	int maxx = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			maxx = max(abs(ve1[i] - ve1[j]) * abs(ve2[i] - ve2[j]), maxx);
		}
	}
	cout << maxx << "\n";

	return 0;
}