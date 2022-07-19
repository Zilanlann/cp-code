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

const int maxn = 2e5 + 5;
int t;
int a[maxn], b[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            while (a[i] % 2 == 0) a[i] /= 2;
        }
        map<int, int> ma, ma2;
        for (int i = 0; i < n; i++) ma[a[i]]++;
        bool fl = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            while (!ma[b[i]] && b[i]) b[i] /= 2;
            ma2[b[i]]++;
            if (b[i] == 0) {
                fl = 1;
            }
        }
        if (fl) {
            cout << "NO\n";
            continue;
        }
        auto it = ma.end();
        while (it != ma.begin()) {
            it--;
            if (it->second > ma2[it->first]) {
                fl = 1;
                break;
            } else if (it->second < ma2[it->first]) {
                int xx = it->first;
                xx /= 2;
                while (!ma[xx] && xx) xx /= 2;
                ma2[xx] += ma2[it->first] - it->second;
            }
        }
        if (fl)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 22:35:36
