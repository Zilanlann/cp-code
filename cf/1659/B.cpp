// Problem: B. Bit Flipping
// Contest: Codeforces Round #782 (Div. 2)
// URL: https://codeforces.com/contest/1659/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Author: chrisann
// Date: 2022-04-17 22:44:50

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

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        string s;
        int n, k;
        cin >> n >> k >> s;
        int cnt = 0;
        vector<int> ve(n, 0);
        rep(i, 0, n - 1) {
            if (k % 2 != 0) {
                if (s[i] == '1') {
                    if (cnt + 1 <= k) {
                        cnt++;
                        ve[i] = 1;
                    } else
                        s[i] = '0';
                } else
                    s[i] = '1';
            } else {
                if (s[i] == '0' && cnt + 1 <= k) {
                    s[i] = '1';
                    cnt++;
                    ve[i] = 1;
                }
            }
        }
        ve[n - 1] += k - cnt;
        if (cnt % 2 != 0) {
            if (s[n - 1] == '0')
                s[n - 1] = '1';
            else
                s[n - 1] = '0';
        }
        cout << s << "\n";
        for (auto v : ve) cout << v << " ";
        cout << "\n";
    }

    return 0;
}
