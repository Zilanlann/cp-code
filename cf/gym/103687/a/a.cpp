
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
        int a, b;
        cin >> a >> b;
        if (a < b) {
            if (a % 2 == 0 && b % 2 == 0) {
                int x = (b - a) / 2;
                if (x % 2)
                    cout << 2 << endl;
                else {
                    cout << 3 << endl;
                }
            } else if (a % 2 == 0 && b % 2 != 0)
                cout << "1\n";
            else if (a % 2 != 0 && b % 2 == 0)
                cout << "1\n";
            else {
                int x = (b - a) / 2;
                if (x % 2)
                    cout << 2 << endl;
                else {
                    cout << 3 << endl;
                }
            }
        } else if (a > b) {
            if (a % 2 == 0 && b % 2 == 0)
                cout << "1\n";

            else if (a % 2 == 0 && b % 2 != 0)
                cout << "2\n";
            else if (a % 2 != 0 && b % 2 == 0)
                cout << "2\n";
            else
                cout << "1\n";
        } else
            cout << 0 << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-15 14:57:03
