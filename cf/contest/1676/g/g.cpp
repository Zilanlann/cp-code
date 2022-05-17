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

void dfs(vector<pair<int, char> > &ga, int u) {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, char> > ve(n);
        for (auto &v : ve)
            cin >> v.first;
        for (auto &v : ve)
            cin >> v.second;
        vector<pair<int, char> > ga[n];
        for (int i = 0; i < ve.size(); i++) {
            ga[ve[i].first].pb(mp(i + 1, ve[i].second));
        }
        
    }

    return 0;
}

// handle:Chrisann
// date:2022-05-10 22:45:00
