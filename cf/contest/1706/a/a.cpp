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

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        string s(m, 'B');
        map<int, vector<int>> ma;
        for (int i = 0; i < n; i++) {
            int x = min(a[i], m + 1 - a[i]);
            int y = max(a[i], m + 1 - a[i]);
            ma[x].push_back(y);
        }
        for (auto [x, y] : ma) {
            sort(y.begin(), y.end());
            y.pop_back();
            s[x - 1] = 'A';
            for (auto v : y) s[v - 1] = 'A';
        }
        cout << s << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-18 22:38:26
