// Problem: E. Replace With the Previous, Minimize
// Contest: Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-05 22:36:21

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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<char> ve(n);
        for (auto& v : ve) cin >> v;
        int maxx = *max_element(all(ve)) - 'a';
        if (k >= maxx) {
            // cout << " ";
            string s(n, 'a');
            cout << s << "\n";
        } else {
            // cout << " ";
            if (ve[0] >= k + 'a') {
                // cout << " ";
                int a = ve[0];
                ve[0] -= k;
                for (int i = 1; i < ve.size(); i++) {
                    if (ve[i] <= a && ve[i] > ve[0]) ve[i] = ve[0];
                }
            } else {
                int maxx = ve[0] - 'a';
                ve[0] = 'a';
                int pos = -1;
                for (int i = 1; i < ve.size(); i++) {
                    if (ve[i] <= k + 'a') {
                        maxx = max(ve[i] - 'a', maxx);
                        ve[i] = 'a';
                    } else {
                        pos = i;
                        break;
                    }
                }
                for (auto& v : ve) {
                    if (v <= 'a' + maxx) v = 'a';
                }
                k -= maxx;
                if (pos < ve.size()) {
                    int a = ve[pos];
                    ve[pos] -= k;
                    for (int i = pos + 1; i < ve.size(); i++) {
                        if (ve[i] <= a && ve[i] > ve[pos]) ve[i] = ve[pos];
                    }
                }
            }
            for (auto v : ve) cout << v;
            cout << "\n";
        }
    }

    return 0;
}
