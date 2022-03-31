#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int a, b, c, d;

bool is_prime(int n) {
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void solve() {
	for (int i = a; i <= b; i++) {
		bool tmp = true;
		for (int j = c; j <= d; j++) {
			if (is_prime(i + j)) {
				tmp = false;
				break;
			}
		}
		if (tmp) {
			cout << "Takahashi" << "\n";
			return;
		}
	}
	cout << "Aoki" << "\n";
	return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> a >> b >> c >> d;
    solve();

    return 0;
}
