#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxn = 5e4 + 5;
int n, m, x[maxn], y[maxn], r[maxn];
vector<int> ve[maxn];
int cnt;
bool vis[maxn];

void dfs(int ru) {
	if (vis[ru]) return;
	vis[ru] = 1;
	for (auto v : ve[ru]) {
		dfs(v);
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO

	memset(vis, 0, sizeof(vis));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> r[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double tmp = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
			if (tmp <= r[i]) ve[i].push_back(j);
			if (tmp <= r[j]) ve[j].push_back(i);
		}
	}
	for (int i = 0; i < m; i++) {
		int x1, y1, r1;
		cin >> x1 >> y1 >> r1;
		for (int j = 0; j < n; j++) {
			double tmp = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
			if (tmp <= r1) dfs(j);
		}
	}
	for (int i = 0; i < n; i++) {
		if (vis[i]) cnt++;
	}
	cout << cnt << "\n";
	

	return 0;
}
