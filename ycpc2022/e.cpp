#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int n, m;
bool vis[2000];
vector<int> g[205];

void dfs(int u) {
	vis[u] = true;
	for (auto v : g[u]) {
		if (!vis[v])
			dfs(v);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	
	cin >> n >> m;
	vector<int> ve(n);
	for (auto& v : ve)
		cin >> v;
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
	}
	dfs(1);
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			ans += ve[i - 1];
		}
		
	}
	cout << ans << "\n";

	return 0;
}