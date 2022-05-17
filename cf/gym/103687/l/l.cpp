#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int n;
    cin >> n;
    vector<int> ve(n);
    ll sum = 0, x = 0, ans = 0;
    for (auto &v : ve) {
        cin >> v;
        sum += v;
    }
    multiset<int> se(all(ve));
    bool fl = 1;
    while (fl && x < n) {
        int l = 0, r = n - 1 - x;
        while (r < n) {
            multiset<int> se1 = se;
            ll tmp = sum;
            for (int i = 0; i < l; i++) {
                tmp -= ve[i];
                se1.erase(se1.find(ve[i]));
            }
            for (int i = r + 1; i < n; i++) {
                tmp -= ve[i];
                se1.erase(se1.find(ve[i]));
            }
            // for (auto v : se1) cout << v << " ";
            // cout << "\n";
            db avg = db(tmp) / (n - x);
            // cout << avg << " ";
            vector<int> a(all(se1));
            ll b = a.end() - upper_bound(all(a), avg);
            // cout << b << "\n";
            ans = max(ans, b);
            if (ans >= n - x - 1)
                fl = 0;
            r++, l++;
        }
        x++;
    }
    cout << ans << "\n";

    return 0;
}

// handle:Chrisann
// date:2022-05-15 14:57:03
