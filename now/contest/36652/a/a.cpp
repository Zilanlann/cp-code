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
struct str {
    int a, b, c;
};

bool cmp(const str &a, const str &b) {
    if (a.c == b.c) {
        if (a.a == b.a)
            return a.b < b.b;
        return a.a < b.a;
    }
    return a.c < b.c;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    int n, m;
    cin >> n >> m;
    vector<str> ve(n);
    rep(i, 0, n) {
        int a, b, c;
        cin >> a >> b >> c;
        ve[i].a = a, ve[i].b = b, ve[i].c = c;
    }
    sort(all(ve), cmp);
    rep(i, 0, m) {
        int j = n - 1 - i;
        cout << ve[j].a << " " << ve[j].b << " " << ve[j].c << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-02 15:40:54
