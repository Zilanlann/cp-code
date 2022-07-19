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

vector<string> ve(3);
inline void dfs(int a) {
    if (ve[a].empty()) {
        cout << char(a + 'A') << "\n";
        return;
    }
    int x = ve[a].back() - 'a';
    ve[a].pop_back();
    dfs(x);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        ve[i] = string(s.rbegin(), s.rend());
    }
    dfs(0);

    return 0;
}
