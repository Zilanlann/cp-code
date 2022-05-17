#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
const int maxn = 5e5 + 5;
using namespace std;
#define int long long
namespace Kruskal {
    int n, m;
    struct Edge {
        int from, to, w;
        bool operator<(const Edge &e) const {
            return w < e.w;
        }
    };
    vector<Edge> edges;
    int par[maxn];
    void add_edge(int u, int v, int d) {
        edges.push_back({u, v, d});
    }
    void init() {
        for (int i = 1; i <= n; i++) par[i] = i;
    }
    int find(int x) {
        return x == par[x] ? x : par[x] = find(par[x]);
    }
    int kruskal() {
        int res = 0;
        sort(edges.begin(), edges.end());
        for (auto e : edges) {
            int a = find(e.from), b = find(e.to);
            if (a == b) continue;
            par[a] = b;
            res += e.w;
        }
        return res;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> Kruskal::n >> Kruskal::m;
    Kruskal::init();
    for (int i = 1; i <= Kruskal::m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        Kruskal::add_edge(a, b, c);
    }
    cout << Kruskal::kruskal();
    return 0;
}
