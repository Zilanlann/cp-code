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
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

const int N=101000;
int n,m;
ll a[N],c[N],b[N];

int main() {
    scanf("%d%d",&n,&m);
    rep(i,0,n+1) scanf("%lld",a+i);
    rep(i,0,n+m+1) scanf("%lld",c+i);
    per(i,0,m+1) {
        b[i]=c[i+n]/a[n];
        rep(j,0,n+1) {
            c[i+j]-=a[j]*b[i];
        }
        assert(c[i+n]==0);
    }
    rep(i,0,m+1) printf("%lld ",b[i]);
    puts("");
}
