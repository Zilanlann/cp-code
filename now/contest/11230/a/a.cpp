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

int a, b, c, d, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> a >> b >> c >> d >> x;
    cout << max(x - a, 0) << " " << max(x - b, 0) << " " << max(x - c, 0) << " " << max(x - d, 0)
         << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-08 19:00:47
