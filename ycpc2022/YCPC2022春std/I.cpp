#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>

using namespace std;
const int maxn = 1005;
int M[maxn][maxn];
int vis[maxn];

int n, m;
vector<int> ANS[2];

int dfs(int u, int col)
{
    vis[u] = col;
    for (int v = 1; v <= n; v++)
    {
        if (u == v || M[u][v])
            continue;
        if (vis[v] != -1)
        {
            if (vis[v] == col)
                return false;
            continue;
        }
        if (!dfs(v, col ^ 1))
            return false;
    }
    return true;
}

int main()
{

    cin >> n >> m;
    // cout << n << " " << m;
    memset(vis, -1, sizeof(vis));

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        M[u][v] = M[v][u] = 1;
    }
    int cur = 1;
    for (int i = 1; i <= n; i++)
        if (vis[i] == -1)
        {
            if (!dfs(i, cur))
            {
                cout << -1 << "\n";
                return 0;
            }
            cur ^= 1;
        }
    for (int i = 1; i <= n; i++)
        ANS[vis[i]].push_back(i);

    for (auto &v : ANS)
    {
        cout << v.size() << "\n";
        for (auto x : v)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}