#include <bits/stdc++.h>
#include <string>
#include <vector>
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
        int n, m;
        cin >> n >> m;
        vector<string> ve(n);
        int ans = 200000;
        for (auto & v : ve) cin >> v;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int a = 0;
                for (int k = 0; k < m; k++) a += abs(ve[i][k] - ve[j][k]);
                ans = min(ans, a);

            }
        }
        cout << ans << "\n";
    }

    return 0;
}

//handle:Chrisann
//date:2022-05-10 22:45:00
