#include <algorithm>
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

const int maxn = 2e5 + 5;
int t, n, m;
int a[maxn];

bool check(int x) {
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (x > a[i])
            cnt += a[i] + (x - a[i]) / 2;
        else
            cnt += x;
    }
    if (cnt >= m)
        return true;
    else
        return false;
}

void binary_search() {
    int l = 0, r = 5e5;
    while (l + 1 < r) {
        int mid = l + (r - l >> 1);
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            a[x]++;
        }
        binary_search();
        // cout << check(1) << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-08 22:35:01
