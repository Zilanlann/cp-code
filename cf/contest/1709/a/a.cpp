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
        int x;
        cin >> x;
        vector<int> vis(4, 0);
        map<int, int> ma;
        for (int i = 1; i <= 3; i++) {
            int a;
            cin >> a;
            ma[i] = a;
        }
        vis[x] = 1;
        int tmp = ma[x];
        while (tmp != 0) {
            vis[tmp] = 1;
            tmp = ma[tmp];
        }
        int cnt = vis[1] + vis[2] + vis[3];
        if (cnt == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-21 22:35:00
