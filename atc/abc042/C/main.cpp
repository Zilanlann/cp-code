#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) {
    return mrand() % x;
}
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

int vis[10], n, k, ans = 99999999;
vector<int> ve;

void dfs(string s, int u) {
    if (u == s.size()) {
        int a = stoi(s);
        if (a >= k) {
            ans = min(ans, a);
            return;
        } else
            return;
    }
    for (auto v : ve) {
        string ss = s;
        ss[u] = v + '0';
        dfs(ss, u + 1);
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vis[a] = 1;
    }
    for (int i = 0; i < 10; i++) {
        if (!vis[i]) ve.push_back(i);
    }
    int x = stoi(string(to_string(k).size(), ve.back() + '0'));
    if (x >= k)
        dfs(string(to_string(k).size(), '0'), 0);
    else
        dfs(string(to_string(k).size() + 1, '0'), 0);
    cout << ans << "\n";


    return 0;
}
