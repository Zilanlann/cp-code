// Problem: C. Connect the Points
// Contest: Codeforces - 2021-2022 ICPC, NERC, Northern Eurasia Onsite (Unrated,
// Online Mirror, ICPC Rules, Teams Preferred) URL:
// https://codeforces.com/contest/1666/problem/C Memory Limit: 512 MB Time
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

int x[3], y[3];

void solve() {
    if (y[0] == y[1] == y[2]) {
        sort(x, x + 3);
        cout << 1 << "\n";
        cout << x[0] << " " << y[0] << " " << x[2] << " " << y[0];
        return;
    }
    if (x[0] == x[1] == x[2]) {
        sort(y, y + 3);
        cout << 1 << "\n";
        cout << x[0] << " " << y[0] << " " << x[2] << " " << y[0];
        return;
    }
    if (x[0] == x[1] || x[1] == x[2] || x[0] == x[2]) {
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    rep(i, 0, 3) cin >> x[i] >> y[i];

    return 0;
}
