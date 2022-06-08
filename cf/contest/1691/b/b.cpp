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
        int n;
        cin >> n;
        vector<int> ans;
        map<int, vector<int>> ma;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ma[a].push_back(i + 1);
        }
        bool fl = 1;
        for (auto v : ma) {
            if (v.se.size() < 2) {
                fl = 0;
                break;
            }
        }
        if (fl) {
            for (auto v : ma) {
                int n = v.se.size();
                cout << v.se[n - 1] << " ";
                for (int i = 0; i < n - 1; i++) {
                    cout << v.se[i] << " ";
                }
            }
            cout << "\n";
        }
        else cout << "-1\n";
    }

    return 0;
}

//handle:Chrisann
//date:2022-05-31 22:35:01
