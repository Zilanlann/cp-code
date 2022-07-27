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

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    //每个数可重复！！！这样这题就非常简单了，判断一下l，r之间有没有这个倍数即可
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> ve;
        for (int i = 1; i <= n; i++) {
            int tmp = l;
            if (l % i != 0) tmp += i - l % i;
            if (tmp >= l && tmp <= r) ve.push_back(tmp);
        }
        if (ve.size() == n) {
            cout << "YES\n";
            for (auto v : ve) cout << v << " ";
            cout << "\n";
        } else
            cout << "NO\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-16 22:35:35
