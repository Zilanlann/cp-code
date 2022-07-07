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
    if (s.size() == 2) {
        if (s[0] == s[1])
            cout << "1 2\n";
        else
            cout << "-1 -1\n";
        return 0;
    }
    for (int i = 0; i <= s.size() - 3; i++) {
        if (s[i] == s[i + 1] || s[i] == s[i + 2] || s[i + 1] == s[i + 2]) {
            cout << i + 1 << " " << i + 3 << "\n";
            return 0;
        }
    }
    cout << "-1 -1\n";

    return 0;
}
