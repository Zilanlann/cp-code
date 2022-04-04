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
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int maxn = 2e5 + 5;
int n, a[maxn], b[maxn];
vector<pair<int, pair<int, int>>> ve;

void solve() {
    sort(all(ve));
    int tmp = 1e9 + 1;
    rep(i, 0, n) {
        if (ve[i].fi != tmp) tmp = ve[i].fi;
        else {
            if (ve[i].se.se == 1 && ve[i - 1].se.se == 0) {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    cin >> n;
    rep(i, 0, n) cin >> a[i] >> b[i];
    rep(i, 0, n) {
        char c;
        cin >> c;
        ve.pb(mp(b[i], mp(a[i], c == 'L')));
    }
    solve();

    return 0;
}
