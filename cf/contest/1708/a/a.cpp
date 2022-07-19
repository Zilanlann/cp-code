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

int t;
int a[200];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        bool fl = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1] && a[i] % a[i - 1] == 0)
                a[i] = a[i - 1];
            else {
                fl = 0;
                break;
            }
        }
        if (fl)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 22:35:35
