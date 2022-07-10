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
int a[2][2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int cnt = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
                cnt += a[i][j];
            }
        }
        if (cnt == 4)
            cout << "2\n";
        else if (cnt == 0)
            cout << "0\n";
        else if (cnt == 3)
            cout << "1\n";
        else if (cnt == 1)
            cout << "1\n";
        else {
            cout << "1\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-08 22:35:01
