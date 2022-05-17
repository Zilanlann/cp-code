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
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int x, y;
        x = a + b + c - 3 * '0';
        y = d + e + f - 3 * '0';
        if (x == y)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-10 22:45:00
