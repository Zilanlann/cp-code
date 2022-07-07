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
int a[maxn], pos[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        rep(i, 0, n) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int l = pos[0], r = pos[0];
        vector<pair<int, int>> ve;
        for (int i = 1; i < n;) {
            int cnt = 0;
            int x = pos[i];
            if (x < l) {
                sort(a + x, a + l + 1);
                for (int j = x + 1; j < l; j++) {
                    if (a[j] == ++i)
                        cnt++;
                    else
                        break;
                }
                ve.push_back({cnt, l - x + 1});
                l = x;
            } else if (x > r) {
                sort(a + r + 1, a + x);
                for (int j = r + 1; j < x; j++) {
                    if (a[j] == ++i)
                        cnt++;
                    else
                        break;
                }
                ve.push_back({cnt, x - r + 1});
                r = x;
            }
        }
        ll x = ve.size() - 1;
        for (auto v : ve) {
            x += v.fi;
        }
        ll res = n - x;
    }



    return 0;
}

// handle:Chrisann
// date:2022-07-04 22:34:57
