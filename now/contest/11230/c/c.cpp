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

int n;
string s;
double k;
vector<string> ve;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a.size() != s.size()) {
            if (k == 0) ve.push_back(a);
        } else {
            int m = min(s.size(), a.size());
            double cnt = 0;
            for (int j = 0; j < m; j++) {
                if (s[j] == a[j]) cnt++;
            }
            cnt /= a.size();
            if (cnt == k)
                ve.push_back(a);
            else if (cnt > k) {
                k = cnt;
                ve.clear();
                ve.push_back(a);
            }
        }
    }
    sort(ve.begin(), ve.end());
    for (auto v : ve) cout << v << "\n";


    return 0;
}

// handle:Chrisann
// date:2022-07-08 19:05:19
