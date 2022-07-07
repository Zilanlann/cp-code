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
typedef double    db;
ll                gcd(ll a, ll b) {
                   return b ? gcd(b, a % b) : a;
}
// head


int a[60][60];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    for (int i = 0; i < 50; i++) {
        if (i % 4 == 0)
            a[i][0] = 1;
        else if (i % 4 == 1)
            a[i][0] = 0;
        else if (i % 4 == 2)
            a[i][0] = 0;
        else
            a[i][0] = 1;
    }
    for (int j = 1; j < 50; j++) {
        for (int i = 0; i < 50; i++) {
            if (j % 2 == 1)
                a[i][j] = (a[i][j - 1] == 0 ? 1 : 0);
            else
                a[i][j] = a[i][j - 1];
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n == 2 && m == 2) {
            cout << "1 0\n0 1\n";
        } else if (n == 2 && m == 4) {
            cout << "1 0 0 1\n0 1 1 0\n";
        } else if (n == 4 && m == 2) {
            cout << "0 1\n1 0\n1 0\n0 1\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) cout << a[i][j] << " ";
                cout << "\n";
            }
        }
    }


    return 0;
}

// handle:Chrisann
// date:2022-07-04 22:34:57
