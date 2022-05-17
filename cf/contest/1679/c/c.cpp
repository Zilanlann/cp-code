#include <algorithm>
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

const int maxn = 1e5 + 5;
int x[maxn], y[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//IO

	
    int n, q;
    cin >> n >> q;
    while (q--) {
        int t, x1, y1, x2, y2;
        cin >> t;
        if (t == 1) {
            cin >> x1 >> y1;
            x[x1]++;
            y[y1]++;
        }
        else if (t == 2) {
            cin >> x1 >> y1;
            x[x1]--;
            y[y1]--;
        }
        else {
            cin >> x1 >> y1 >> x2 >> y2;
            bool flx = 1, fly = 1;
            for (int i = x1; i <= x2; i++) {
                if (x[i] < 1) {
                    flx = 0;
                    break;
                }
            }
            for (int i = y1; i <= y2; i++) {
                if (y[i] < 1) {
                    fly = 0;
                    break;
                }
            }
            if (flx || fly) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}

//handle:Chrisann
//date:2022-05-14 17:40:04
