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
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

const int maxn = 1e5 + 5;
int t;
int n, q, cnt, ans;
int a[maxn];
bool b[maxn], c[maxn];
map<int, vector<int>> ma;

void dfs(int i) {
    if (i < 0 || q <= 0) return;
    if (a[i] > q) {
        q--;
        cnt++;
        cnt -= ma[q + 1].size();
        // cout << ma[q + 1].size() << " ";
        ans = max(ans, cnt);
        for (auto v : ma[q + 1]) dfs(v);
        ma[q + 1].clear();
        ma[a[i]].push_back(i);
    } else
        ma[a[i]].push_back(i);
    dfs(i - 1);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        ma.clear();
        cnt = 0;
        memset(b, 0, sizeof(b));
        cin >> n >> q;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= q) cnt++, b[i] = 1;
        }
        if (q >= n) {
            cout << string(n, '1') << "\n";
            continue;
        }
        int cc = cnt;
        ans = cnt;
        dfs(n - 1);
        ans -= cc;
        for (int i = n - 1; i >= 0; i--) {
            if (ans > 0 && b[i] == 0) {
                ans--;
                b[i] = 1;
            }
        }
        for (int i = 0; i < n; i++) cout << b[i];
        cout << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 22:35:35
