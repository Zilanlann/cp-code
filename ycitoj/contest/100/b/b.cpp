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

string s;
int cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s;
    int n = s.size();
    s += "0000000";
    for (int i = 0; i < n;) {
        if (s[i] == 'h' && s.substr(i, 4) == "htto") {
            cnt++;
            i += 4;
        } else
            i++;
    }
    cout << cnt << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-07-17 14:33:08
