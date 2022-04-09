#include <bits/stdc++.h>

using namespace std;

int a[10];

int main() {
	for (int i = 0; i < 10; i++) a[i] = 2021;
	for (int i = 1; ; i++) {
		int num = i;
		while (num > 0) {
			//cout << num % 10 << " ";
			a[num % 10]--;
			if (a[num % 10] < 0) {
				cout << i - 1 << "\n";
				return 0;
			}
			num /= 10;
		}
	}
	return 0;
}