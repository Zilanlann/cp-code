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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, vector<int>> ma;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ma[a].push_back(i + 1);
        }
        for (int i = 1; i <= n; i++) {
            int even = 0, odd = 0;
            for (auto v : ma[i]) {
                if (v % 2 != 0) {
                    if (even == 0)
                        odd = 1;
                    else
                        odd = even + 1;
                } else {
                    if (odd == 0)
                        even = 1;
                    else
                        even = odd + 1;
                }
                // cout << even << " " << odd << " - ";
            }
            cout << max(even, odd) << " ";
        }
        cout << "\n";
    }
    return 0;
}

// handle:Chrisann
// date:2022-07-18 22:38:26
