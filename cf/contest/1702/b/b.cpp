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

int t, ans;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        ans = 0;
        cin >> s;
        set<int> se;
        for (int i = 0; i < s.size(); i++) {
            se.insert(s[i]);
            if (se.size() > 3) {
                ans++;
                se.clear();
            }
            se.insert(s[i]);
        }
        if (!se.empty()) ans++;
        cout << ans << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 22:35:36
