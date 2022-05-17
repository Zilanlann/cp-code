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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> ve(n);
        for (auto &v : ve)
            cin >> v;
        sort(all(ve), greater<ll>());
        rep(i, 1, n) ve[i] += ve[i - 1];
        while (k--) {
            ll q;
            cin >> q;
            auto it = lower_bound(all(ve), q);
            if (it == ve.end())
                cout << -1 << "\n";
            else {
                cout << it - ve.begin() + 1 << "\n";
            }
        }
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-10 22:45:00
