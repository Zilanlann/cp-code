#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
const ll mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int N = 3e6;
int head[N], tot, n, m, dis[N];
int vis[N], k, S, T, ans;

struct Edge {
    int nxt, to, dis;
} e[N];

void add(int x, int y, int w) {
    e[++tot] = (Edge){head[x], y, w};
    head[x] = tot;
}

struct node {
    int dis, pos;
    bool operator<(const node& x) const { return x.dis < dis; }
};

priority_queue<node> q;

void dijkstra(int s) {
    memset(dis, 0x3f3f3f3f, sizeof dis);
    dis[s] = 0;
    q.push((node){dis[s], s});
    while (!q.empty()) {
        node tmp = q.top();
        q.pop();
        int x = tmp.pos;
        if (vis[x]) continue;
        vis[x] = 1;
        for (int i = head[x]; i; i = e[i].nxt) {
            int j = e[i].to;
            if (dis[j] > dis[x] + e[i].dis) {
                dis[j] = dis[x] + e[i].dis;
                if (!vis[j]) q.push((node){dis[j], j});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    int s = 1, t = n;
    for (int i = 1; i <= m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        add(u, v, c);
        add(v, u, c);
        for (int j = 1; j <= k; ++j) {
            add(u + (j - 1) * n, v + j * n, 0);
            add(v + (j - 1) * n, u + j * n, 0);
            add(u + j * n, v + j * n, c);
            add(v + j * n, u + j * n, c);
        }
    }
    dijkstra(s);
    int ans = (1 << 30);
    for (int i = 0; i <= k; ++i) ans = min(ans, dis[t + i * n]);
    cout << ans << "\n";
    return 0;
}