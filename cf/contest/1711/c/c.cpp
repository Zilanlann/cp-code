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

const int N = 1e5 + 5;
int t, n, m, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        vector<int> a, b;
        cin >> n >> m >> k;
        for (int i = 1; i <= k; i++) {
            int x;
            cin >> x;
            if (x / n >= 2) a.push_back(x / n);
            if (x / m >= 2) b.push_back(x / m);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (auto v : a) {
            if (m == 0) break;
            else if (m == 1) {
                if (v > a[0]) {
                    m = 0;
                    break;
                }
                else continue;
            }
            m = max(0, m - v);
        }
        for (auto v : b) {
            if (n == 0) break;
            else if (n == 1) {
                if (v > b[0]) {
                    n = 0;
                    break;
                }
                else continue;
            }
            n = max(0, n - v);
        }
        if (n == 0 || m == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

// handle:Chrisann
// date:2022-07-24 22:35:00