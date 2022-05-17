#include <cstring>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
const int maxn = 100005;

namespace DJ {
    struct HeapNode {
        long long d;
        int x;
        bool operator < (const HeapNode &nc) const {
            return d > nc.d;
        }
    };
    vector<pair<int , int>> G[maxn];
    int vis[maxn];
    long long d[maxn];
    void add_edge(int x, int y, int v) {
        G[x].push_back({y, v});
    }
    void solve(int s) {
        memset(d, 0x3f, sizeof(d));
        memset(vis, 0, sizeof(vis));
        d[s] = 0;
        priority_queue<HeapNode> q;
        q.push({0LL, s});
        while (!q.empty()) {
            int cur_d = q.top().d;
            int u = q.top().x;
            q.pop();
            if (vis[u]) continue;
            vis[u] = 1;
            for (auto [v, w] : G[u]) {
                if (d[v] > d[u] + w) {
                    d[v] = d[u] + w;
                    q.push({d[v], v});
                }
            }
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        DJ::add_edge(a, b, c);
    }
    DJ::solve(1);
    cout << DJ::d[N];
    return 0;
}
