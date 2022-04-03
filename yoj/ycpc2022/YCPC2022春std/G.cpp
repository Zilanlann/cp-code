#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
const int maxn = 1005;

vector<int> tab[maxn];
int f[maxn]; // f[x] : x-> b 的最少步数
int b;
void init()
{
    for (int a = 1; a < maxn; a++)
    {
        for (int x = 1; x < maxn; x++)
        {
            tab[a].push_back((a + x - 1) / x);
        }
        sort(tab[a].begin(), tab[a].end());
        tab[a].erase(unique(tab[a].begin(), tab[a].end()), tab[a].end());
    }
}
int dp(int x)
{
    if (f[x] != -1)
        return f[x];
    f[x] = 100;
    for (auto v : tab[x])
    {
        if (x + v > b)
            continue;
        f[x] = min(f[x], dp(x + v) + 1);
    }
    return f[x];
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a >> b;

        memset(f, -1, sizeof(f));
        f[b] = 0;
        cout << dp(a) << "\n";
    }
    return 0;
}