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

const int maxn = 1e5 + 5;
int a[maxn], dp[maxn][2], n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        dp[i][0] = max(abs(a[i] - a[i - 1]) + dp[i - 1][0], a[i] - 1 + dp[i - 1][1]);
        dp[i][1] = max(abs(1 - a[i - 1]) + dp[i - 1][0], dp[i - 1][1]);
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]) << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-08 19:05:22
