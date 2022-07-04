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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string a(n + 1, '1'), ans(n, '0');
        if (s[0] != '9') {
            rep(i, 0, n) { cout << char('9' - s[i] + '0'); }
            cout << "\n";
        } else {
            reverse(all(a));
            reverse(all(s));
            rep(i, 0, n) {
                ans[i] += a[i] - s[i];
                if (ans[i] < '0') {
                    a[i + 1]--;
                    ans[i] += 10;
                }
            }
            reverse(all(ans));
            cout << ans << "\n";
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-01 19:31:16
