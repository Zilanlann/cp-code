// Problem: D. A-B-C Sort
// Contest: Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Handle: chrisann
// Date: 2022-05-02 22:35:09

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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

bool solve() {
    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve) cin >> v;
    if (n % 2 == 0) {
        for (int i = 1; i < ve.size(); i += 2) {
            if (ve[i - 1] > ve[i]) swap(ve[i - 1], ve[i]);
        }
    } else {
        for (int i = 2; i < ve.size(); i += 2) {
            if (ve[i - 1] > ve[i]) swap(ve[i - 1], ve[i]);
        }
    }
    for (int i = 1; i < ve.size(); i++) {
        if (ve[i - 1] > ve[i]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
