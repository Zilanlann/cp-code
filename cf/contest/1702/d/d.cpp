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

int t, a[27];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        string s;
        cin >> s;
        int x, sum = 0;
        cin >> x;
        for (int i = 0; i < s.size(); i++) {
            a[s[i] - 'a' + 1]++;
            sum += s[i] - 'a' + 1;
        }
        int pos = 26;
        while (sum > x) {
            while (a[pos] == 0) pos--;
            a[pos]--, sum -= pos;
        }
        // for (int i = 1; i < 27; i++) cout << a[i] << " ";
        // cout << "\n";
        for (int i = 0; i < s.size(); i++) {
            if (a[s[i] - 'a' + 1] != 0) {
                cout << s[i];
                a[s[i] - 'a' + 1]--;
            }
        }
        cout << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 22:35:36
