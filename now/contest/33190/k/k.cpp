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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // IO

    int n, k;
    cin >> n >> k;
    if (k + k + 1 > n)
        cout << "-1\n";
    else
        cout << n - k + k + 1 << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-08-01 13:03:57