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

bool check(string s) {
    int n = s.size();
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(')
            tmp++;
        else
            tmp--;
        // cout << tmp << " ";
        if (tmp < 0) return false;
    }
    if (tmp == 0)
        return true;
    else
        return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int l = 0, r = 0, x = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                l++;
            else if (s[i] == ')')
                r++;
            else
                x++;
        }
        if (x == 0) {
            cout << "YES\n";
            continue;
        }
        int resl = n / 2 - l, resr = n / 2 - r;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                if (resl == 1) {
                    s[i] = ')';
                    resl--;
                } else if (resl == 0 && resr == n / 2 - r) {
                    s[i] = '(';
                    resr--;
                } else if (resl > 0)
                    s[i] = '(', resl--;
                else
                    s[i] = ')', resr--;
            }
        }
        cout << (check(s) ? "NO\n" : "YES\n");
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-21 22:35:00
