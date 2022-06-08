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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    // a = 0, b = 1
    // a += b or b += a
    // a *= x or b *= x
    int t;
    cin >> t;
    while (t--) {
        ll n, x, cnt = 0;
        cin >> n >> x;
        if (n == 0 || n == 1) {
            cout << "0\n";
            continue;
        }
        ll a = 0, b = 1;
        vector<int> ve;
        for (int i = 0; b < n; i++) {
            b = pow(x, i);
            ve.push_back(b);
        }
        if (b > n) ve.pop_back();
        int c = n - ve.back();
        map<int, int> ans;
        if (c != 0) {
            for (int i = ve.size() - 1; i >= 0; i--) {
                int x = c / ve[i];
                ans[ve[i]] += x;
                c %= ve[i];
                if (c == 0)
                    break;
            }
        }
        for (auto v : ans) cnt += v.second;
        cnt += ve.size() - 1;
        if (b != n) cnt++;
        cout << cnt << "\n";
        for (auto v : ve) {
            if (v != 1) {
                cout << "2 b\n";
            }
            for (int i = 0; i < ans[v]; i++) {
                cout << "1 a\n";
            }
        }
        if (b != n) {
            cout << "1 b\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-06-03 19:17:44

