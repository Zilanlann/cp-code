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
string a[200005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<string> se;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            se.insert(a[i]);
        }
        for (int i = 0; i < n; i++) {
            string s = a[i];
            bool ok = 0;
            for (int j = 1; j < s.size(); j++) {
                // cout << s.substr(0, j) << " " << s.substr(j, s.size() - j) << "\n";
                if (se.count(s.substr(0, j)) && se.count(s.substr(j, s.size() - j))) {
                    ok = 1;
                    break;
                }
            }
            if (ok)
                cout << "1";
            else
                cout << "0";
        }
        cout << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-12 22:35:59
