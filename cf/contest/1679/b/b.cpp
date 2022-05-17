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

	
    ll n, q;
    cin >> n >> q;
    vector<int> ve(n);
    ll sum = 0;
    for (auto & v : ve) {
        cin >> v;
        sum += v;
    }
    set<int> se;
    ll tmp = 0;
    while (q--) {
        ll t, i, x;
        cin >> t;
        if (t == 1) {
            cin >> i >> x;
            i--;
            if ((se.count(i)) == 0 && tmp != 0) {
                ve[i] = tmp;
                se.insert(i);
            }
            if (ve[i] >= x) {
                sum -= ve[i] - x;
                ve[i] = x;
            }
            else {
                sum += x - ve[i];
                ve[i] = x;

            }
        }
        else {
            cin >> x;
            sum = n * x;
            tmp = x;
            se.clear();
        }
        cout << sum << "\n";
    }

    return 0;
}

//handle:Chrisann
//date:2022-05-14 17:40:04
