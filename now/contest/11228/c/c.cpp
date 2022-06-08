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

    int a, b, x;
    cin >> a >> b >> x;
    // 010101 == x, a - x even b - x even
    if (a - x / 2 < 0 || b - x / 2 < 0 || (a - x / 2)  % 2 != 0 || (b - x / 2) % 2 != 0) {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; i < x / 2; i++) cout << "01";
    for (int i = 0; i < (a - x / 2) / 2; i++) cout << "00";
    for (int i = 0; i < (b - x / 2) / 2; i++) cout << "11";
    cout << "\n";
	

    return 0;
}

//handle:Chrisann
//date:2022-06-03 19:09:06
