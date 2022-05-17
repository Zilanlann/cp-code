#include <algorithm>
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

const int maxn = 2e5 + 5;
int ans = 0;
int a[maxn], t[maxn];

void merge(int ll, int rr) {
    // 用来把 a 数组 [ll, rr - 1] 这一区间的数排序。 t
    // 数组是临时存放有序的版本用的。
    if (rr - ll <= 1)
        return;
    int mid = ll + ((rr - ll) >> 1);
    merge(ll, mid);
    merge(mid, rr);
    int p = ll, q = mid, s = ll;
    while (s < rr) {
        if (p >= mid || (q < rr && a[p] >= a[q])) {
            t[s++] = a[q++];
            ans += mid - p;
        } else
            t[s++] = a[p++];
    }
    for (int i = ll; i < rr; ++i)
        a[i] = t[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO
    int m;
    cin >> m;
    while (m--) {
        int n;
        cin >> n;
        rep(i, 0, n) {
            cin >> a[i];
            t[i] = a[i];
        }
        merge(0, n);
        cout << ans << "\n";
        // rep(i, 0, n) cout << a[i] << " ";
        // cout << "\n";
        ans = 0;
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-10 22:45:00
