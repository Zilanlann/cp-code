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
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> ma;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (ma.count(a) == 0)
                ma[a].first = i;
            else
                ma[a].second = i;
        }
        while (k--) {
            // cout << ma[4].second;
            int x, y;
            cin >> x >> y;
            if (ma.count(x) == 0 || ma.count(y) == 0)
                cout << "NO\n";
            else if (ma[x].first <= max(ma[y].second, ma[y].first))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 22:35:36
