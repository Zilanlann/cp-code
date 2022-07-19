#include <bits/stdc++.h>
#include <cstdlib>
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

const int maxn = 1e5 + 5;
int n, k;
int a[maxn];
map<int, int> pos;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
    sort(a, a + n, greater<int>());
    cout << pos[a[k - 1]] << "\n";


    return 0;
}

// handle:Chrisann
// date:2022-07-17 14:36:14
