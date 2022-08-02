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



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        int n, h, m;
        cin >> n >> h >> m;
        vector<pair<int, int>> ve;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            ve.push_back({a, b});
        }
        ve.push_back({h, m});
        sort(ve.begin(), ve.end());
		// for (auto [x, y] : ve) cout << x << "-" << y << " ";
        int fl = 0;
        int xx = 0, yy = 0;
        for (auto [x, y] : ve) {
            if (fl) {
                xx = x - h;
                yy = y - m;
                if (yy < 0) xx--, yy += 60;
				fl = 2;
				break;
            }
            if (x == h && y == m) fl = 1;
        }
        if (fl == 1) {
            xx = 23 - h + ve[0].first;
            yy = 60 - m + ve[0].second;
            if (yy >= 60) xx++, yy -= 60;
        }
		cout << xx << " " << yy << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-08-01 22:35:01