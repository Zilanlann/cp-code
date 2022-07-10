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

int n, x, y, m;
int a[20];
string s, t, u;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        char c;
        cin >> c;
        s += c;
    }
    for (int i = x - 1; i >= x - m; i--) t += a[i] + '0';

    for (int i = x + 1; i <= x + m; i++) u += a[i] + '0';
    if (x < y) swap(t, u);
    if (t == s && t != u)
        cout << "Right\n";
    else if (t == u)
        cout << "Unsure\n";
    else if (t != s)
        cout << "Wrong\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-10 14:42:01
