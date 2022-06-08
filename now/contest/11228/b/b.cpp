#include <bits/stdc++.h>
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

	
    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto & v : ve) cin >> v;
    if (ve[0] == 0) ve[0] = 1;
    for (int i = 1; i < n; i++) {
        if (ve[i] == 0) {
            ve[i] = ve[i - 1] + 1;
        }
        if (ve[i] <= ve[i - 1]) {
            cout << "-1\n";
            return 0;
        }
    }
    int ans = 0;
    for (auto v : ve) ans += v;
    cout << ans << "\n";

    return 0;
}

//handle:Chrisann
//date:2022-06-03 19:03:16
