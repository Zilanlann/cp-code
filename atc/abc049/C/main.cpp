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
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) {
    return mrand() % x;
}
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s;
    int n = s.size();
    reverse(s.begin(), s.end());
    s += "00000000";
    for (int i = 0; i < n;) {
        if (s[i] == 'r') {
            if (s.substr(i, 6) == "resare")
                i += 6;
            else if (s.substr(i, 7) == "remaerd")
                i += 7;
            else {
                cout << "NO\n";
                return 0;
            }
        } else if (s[i] == 'e') {
            if (s.substr(i, 5) == "esare")
                i += 5;
            else {
                cout << "NO\n";
                return 0;
            }
        } else if (s[i] == 'm') {
            if (s.substr(i, 5) == "maerd")
                i += 5;
            else {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";

    return 0;
}
