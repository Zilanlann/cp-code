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
        set<char> se;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            char a;
            cin >> a;
            if (se.count(a) == 0)
                ans += 2;
            else
                ans++;
            se.insert(a);
        }
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-12 22:35:59
