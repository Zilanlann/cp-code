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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<char> ve(n);
        for (int i = 0; i < n; i++) cin >> ve[i];
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (ve[n - 1] == '1') break;
            if (ve[i] == '1' && n - 1 - i <= k) {
                k -= n - 1 - i;
                for (int j = i; j < n - 1; j++) {
                    swap(ve[j], ve[j + 1]);
                }
                break;
            } 
        }
        for (int i = 0; i < n; i++) {
            if (ve[0] == '1') break;
            if (ve[i] == '1' && i != n - 1 && i <= k) {
                for (int j = i; j > 0; j--) {
                    swap(ve[j], ve[j - 1]);
                }
                break;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            int a = ve[i] - '0';
            int b = ve[i + 1] - '0';
            ans += a * 10 + b;
        }
        cout << ans << "\n";
    }
	

    return 0;
}

//handle:Chrisann
//date:2022-05-31 22:35:01
