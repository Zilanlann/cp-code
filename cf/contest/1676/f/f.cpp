#include <bits/stdc++.h>
#include <iterator>
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



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> ma;
        rep(i, 0, n) {
            int a;
            cin >> a;
            ma[a]++;
        }
        int ans = 0;
        int tmp = 0, a, b;
        vector<pair<int, int> > ve(all(ma));
        for (int l = 0, r = 0; l < ve.size() && r < ve.size(); r++) {
            if (ve[r].se < k) tmp = 0;
            else {
                if (ve[r - 1].fi + 1 == ve[r].fi && ve[r - 1].se >= k) tmp++;
                else {
                    tmp = 1;
                    l = r;
                }
            }
            if (tmp > ans) {
                a = l, b = r;
            }
            ans = max(ans, tmp);
        }
        if (ans == 0) cout << -1 << "\n";
        else cout << ve[a].fi << " " << ve[b].fi << "\n";
    }

    return 0;
}

//handle:Chrisann
//date:2022-05-10 22:45:00
