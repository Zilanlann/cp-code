#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m, k;
int a[3000][3000], f[3000][3000];
ll cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			
			int tmp = 0;
			for (int x = i; x <= n; x++) {
				for (int y = j; y <= m; y++) {
					tmp += a[x][y];
					if (x == i) f[x][y] = tmp;
					else {
						f[x][y] = tmp - (f[x - 1][m] - f[x - 1][y]);
					}
					if (f[x][y] <= k) cnt++;
					//cout << f[x][y] << " ";
				}
				//cout << "\n"; 
			}
			//cout << "\n";
		}
	}
	cout << cnt << "\n"; 

	return 0;
}
