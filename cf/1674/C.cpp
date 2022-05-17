// Problem: C. Infinite Replacement
// Contest: Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-02 22:35:08

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

// bool is_hui(string s) {
// string s1(s.rbegin(), s.rend());
// if (s1 == s)
// return true;
// else
// return false;
// }

void solve() {
    string a, b;
    cin >> a >> b;
    if (b == "a") {
        cout << 1 << "\n";
        return;
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 'a') {
            cout << -1 << "\n";
            return;
        }
    }
    ll ans = 1ll << a.size();

    cout << ans << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
