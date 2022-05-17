// Problem: A. Subtle Substring Subtraction
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Handle: chrisann
// Date: 2022-04-30 22:41:14

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
        string s;
        cin >> s;
        ll ans = 0;
        rep(i, 0, SZ(s)) { ans += s[i] - 'a' + 1; }
        if (SZ(s) % 2 == 0) {
            cout << "Alice " << ans << '\n';
        } else {
            if (s[0] < s[SZ(s) - 1]) {
                ans -= 2 * (s[0] - 'a' + 1);

            } else {
                ans -= 2 * (s[SZ(s) - 1] - 'a' + 1);
            }
            if (ans < 0)
                cout << "Bob " << -ans << "\n";
            else
                cout << "Alice " << ans << "\n";
        }
    }

    return 0;
}
