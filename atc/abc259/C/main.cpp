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

string s, t;
vector<pair<char, int>> a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s >> t;
    s += 'A', t += 'A';
    int cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            a.push_back({s[i - 1], cnt});
            cnt = 1;
        } else
            cnt++;
    }
    for (int i = 1; i < t.size(); i++) {
        if (t[i] != t[i - 1]) {
            b.push_back({t[i - 1], cnt});
            cnt = 1;
        } else
            cnt++;
    }
    if (a.size() != b.size()) {
        cout << "No\n";
        return 0;
    } else {
        for (int i = 0; i < a.size(); i++) {
            char x1 = a[i].first, x2 = b[i].first;
            int y1 = a[i].second, y2 = b[i].second;
            if (x1 != x2) {
                cout << "No\n";
                return 0;
            } else {
                if (y1 == 1 && y2 >= 2) {
                    cout << "No\n";
                    return 0;
                } else if (y1 > y2) {
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes\n";

    return 0;
}
