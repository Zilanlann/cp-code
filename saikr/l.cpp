#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

class SegmentTree {
public:
    SegmentTree(ll *A, ll _n) {
        dat = A;
        len = _n;
        tree = new ll [4 * len];
        mark = new ll [4 * len];
        build(1, len, 1);
    }
    void update(ll L, ll R, ll x) {
        update(L, R, x, 1, len, 1);
    }
    ll aa() {
        return sum;
    }
    
private:
    void push_down(ll p,ll len)
    {
        mark[2 * p] += mark[p];
        mark[2 * p + 1] += mark[p];
        tree[2 * p] += mark[p] * (len - len / 2);
        tree[2 * p + 1] += mark[p] * (len / 2);
        mark[p] = 0;
    }

    void build(ll l, ll r, ll p)
    {
        if (l == r)
        {
            tree[p] = dat[l];
            mark[p] = 0;
            sum += tree[p];
            return;
        }
        ll m = (l + r) / 2;
        build(l, m, 2 * p);
        build(m + 1, r, 2 * p + 1);
        tree[p] = tree[2 * p] + tree[2 * p + 1];
        sum += tree[p] * (r - l + 1);
        mark[p] = 0;
    }

    void update(ll L, ll R, ll x, ll l, ll r, ll p)
    {
        if(R < l || r < L)
            return ;
        if(R >= r && L <= l)
        {
            tree[p] += (r - l + 1) * x;
            sum += (r - l + 1) * x * (r - l + 1);
            if(r > l) {
                ll length = r - l + 1;
                ll cnt = 0;
                ll k = length;
                while(k) {
                    k /= 2;
                    cnt += k;
                }
                sum += cnt * x * length;
                mark[p] += x;
            }
            return ;
        }  
        mark[2 * p] += mark[p];
        mark[2 * p + 1] += mark[p];
        tree[2 * p] += mark[p] * ((r - l + 1) - (r - l + 1) / 2);
        tree[2 * p + 1] += mark[p] * ((r - l + 1) / 2);
        mark[p] = 0;
        ll m = (l + r) / 2;
        update(L, R, x, l, m, 2 * p);
        update(L, R, x, m + 1, r, 2 * p + 1);
        sum += (tree[2 * p] + tree[2 * p + 1] - tree[p]) * (r - l + 1);
        tree[p] = tree[2 * p]+tree[2 * p + 1];
    }

ll *dat, *tree, *mark;
ll len, sum = 0;

};

const ll maxn = 1e6 + 5;
ll n, m, op, x, y, k, A[maxn];

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    //IO

    cin >> n >> m;
    for(ll i = 1;i <= n; i++) 
        cin >> A[i];
    SegmentTree st(A, n);
    while (m--) {
        ll x, y, z;
        cin >> x >> y >> z;
        st.update(x, y, z);
        cout << st.aa() << "\n";
    }
    return 0;
}