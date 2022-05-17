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

void solve() {
    ll n;
    cin >> n;
    if (n < 4 || n % 2 != 0) {
        cout << "-1\n";
        return;
    }
    ll minn, maxx;
    if (n % 4 != 0) {
        maxx = n / 4 - 1 + 1;
        minn = maxx - (n / 4 - 1) / 3;
    }
    else {
        maxx = n / 4;
        minn = maxx - maxx / 3;
    }
    cout << minn << " " << maxx << "\n";
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
//date:2022-05-14 17:40:04
