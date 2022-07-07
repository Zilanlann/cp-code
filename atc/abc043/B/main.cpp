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

string s, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            ans += '0';
        else if (s[i] == '1')
            ans += '1';
        else {
            if (ans.size() > 0) ans.pop_back();
        }
    }
    cout << ans << "\n";

    return 0;
}
