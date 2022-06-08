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
        int a;
        cin >> a;
        if (a == 1 || a == 2) {
            cout << "3\n";
            continue;
        }
        bitset<32> bi = a;
        int n;
        for (int i = 31; i >= 0; i--) {
            if (bi[i]) {
                n = i;
                break;
            } 
        }
        ll ans = 0;
        for (int i = 0; i < 31; i++) {
            if (bi[i]) {
                ans += pow(2, i);
                if (n > 0) ans += 1;
            }
        }
    }
	

    return 0;
}

//handle:Chrisann
//date:2022-06-03 22:37:11
