#include <iostream>
#include <vector>
using namespace std;
const int N = 205;
int w[N], vis[N];
int n, m;
vector<int> g[N];
int u, v;
void dfs(int u)
{
    vis[u] = 1;
    for (auto v : g[u])
    {
        if (vis[v] == 1)
            continue;
        dfs(v);
    }
}
int ans;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    while (m--)
    {
        cin >> u >> v;
        g[u].push_back(v);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
        if (vis[i] == 0)
             ans += w[i];
    cout << ans << endl;
    return 0;
}