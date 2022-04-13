#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a, b, n, cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	cin >> a >> b >> n;
	cnt += n / (5 * a + 2 * b);
	cnt *= 7;
	ll tmp = n % (5 * a + 2 * b);
	if (tmp > 5 * a) {
		tmp -= 5 * a;
		cnt += (tmp + b - 1) / b + 5;
	}
	else {
		cnt += (tmp + a - 1) / a;
	}
	cout << cnt << "\n";

	return 0;
}
