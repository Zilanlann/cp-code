// Problem: D. Deletive Editing
// Contest: Codeforces - 2021-2022 ICPC, NERC, Northern Eurasia Onsite (Unrated,
// Online Mirror, ICPC Rules, Teams Preferred) URL:
// https://codeforces.com/contest/1666/problem/D Memory Limit: 512 MB Time
// Limit: 3000 ms

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
        string a, b, c;
        cin >> a >> b;
        map<char, int> ma, m;
        rep(i, 0, 26) ma.insert(mp('A' + i, 0)), m.insert(mp('A' + i, 0));
        rep(i, 0, SZ(a)) ma[a[i]]++;
        rep(i, 0, SZ(b)) m[b[i]]++;
        rep(i, 0, SZ(a)) {
            if (ma[a[i]] <= m[a[i]]) c += a[i];
            ma[a[i]]--;
        }
        // cout << c << "\n";
        cout << ((c == b) ? "YES" : "NO") << "\n";
    }

    return 0;
}
