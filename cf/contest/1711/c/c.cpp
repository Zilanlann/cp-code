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

const int N = 1e5 + 5;
int t, n, m, k;
int a[N], b[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i = 1; i <= k; i++) {
            int x;
            cin >> x;
            a[i] = x / n;
            b[i] = x / m;
        }
        sort(a + 1, a + 1 + k, greater<int>());
        sort(b + 1, b + 1 + k, greater<int>());
        // cout << n << " " << m << " | ";
        for (int i = 1; i <= k; i++) {
            if (m != 0) {
                if (a[i] >= 2) {
                    if (a[i] == 2 && m == 3)
                        ;
                    else {
                        if (m - a[i] <= 0)
                            m = 0;
                        else if (m - a[i] < 2)
                            m = 2;
                        else
                            m -= a[i];
                    }
                }
            }
            if (n != 0) {
                if (b[i] >= 2) {
                    if (b[i] == 2 && n == 3)
                        ;
                    else {
                        if (n - b[i] <= 0)
                            n = 0;
                        else if (n - b[i] < 2)
                            n = 2;
                        else
                            n -= b[i];
                    }
                }
            }
            cout << n << " " << m << " | ";
        }
        if (n == 0 || m == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-24 22:35:00