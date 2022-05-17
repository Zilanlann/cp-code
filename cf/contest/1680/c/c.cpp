#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef double db;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

void solve() {
    string s;
    cin >> s;
    deque<int> a;
    for (int i = 0; i < s.size(); i++) {
        a.pb(s[i] - '0');
    }
    for (auto i = a.begin(); i != a.end(); i++) {
        if (*i == 1) break;
        else a.pop_front();
    }
    for (auto i = a.end() - 1; i >= a.begin(); i--) {
        if (*i == 1) break;
        else a.pop_back();
    }
    if (count(all(a), 1) == a.size()) {
        cout << "0\n";
        return;
    }
    deque<pair<int, int> > b, c;
    int n1 = 1, n0 = 0;
    for (int i = 1; i < a.size(); i++) {
        if (i >= 1 && a[i - 1] == 0 && a[i] == 1) {
            b.pb(mp(n1, n0));
            n1 = 1;
            n0 = 0;
        }
        else if (a[i] == 1) n1++;
        else if (a[i] == 0) n0++;
        if (i == a.size() - 1) {
            b.pb(mp(n1, n0));
        }
    }
    n1 = 0, n0 = 0;
    for (int i = a.size() - 1; i >= 0; i--) {

        if (i < a.size() - 1 && a[i] == 1 && a[i + 1] == 0) {
            c.pb(mp(n1, n0));
            n1 = 1;
            n0 = 0;
        }
        else if (a[i] == 1) n1++;
        else if (a[i] == 0) n0++;
        if (i == 0) {
            c.pb(mp(n1, n0));
        }
    }
    // for (auto v : b) cout << v.fi << "|" << v.se << " ";
    // cout << "\n";
    // for (auto v : c) cout << v.fi << "|" << v.se << " ";
    // cout << "\n";
    int ans = count(all(a), 0), re0 = count(all(a), 0), qu1 = 0;
    while (!b.empty() || !c.empty()) {
        if (b[0].second / b[0].first >= c[0].second / c[0].first) {
            re0 -= b[0].second;
            qu1 += b[0].first;
            ans = min(ans, max(re0, qu1));
            b.pop_front();
            c.pop_back();
            if (b.empty() || c.empty()) break;
            c[c.size() - 1].second = 0;
        }
        else {
            re0 -= c.front().second;
            qu1 += c.front().first;
            ans = min(ans, max(re0, qu1));
            c.pop_front();
            b.pop_back();
            if (b.empty() || c.empty()) break;
            b[b.size() - 1].second = 0;
        }
        // cout << qu1 << " " << re0 << "\n";

    }
    cout << ans << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }


    return 0;
}

//handle:Chrisann
//date:2022-05-13 22:39:18
