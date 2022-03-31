#include<iostream>
#include<cmath>
#define int long long 
using namespace std;
class Segtree
{
public:
    Segtree(int *A,int _n)
    {
        dat=A;
        len=_n;
        tree=new int [4*len];
        mark=new int [4*len];
        build(1,len,1);
    }
    void update(int L,int R,int x)
    {
        update(L,R,x,1,len,1);
    }
    int aa()
    {
        return sum;
    }
    
private:
    int ls(int p){return 2*p;}
    int rs(int p){return 2*p+1;}
    void push_down(int p,int len)
    {
        mark[ls(p)]+=mark[p];
        mark[rs(p)]+=mark[p];
        tree[ls(p)]+=mark[p]*(len-len/2);
        tree[rs(p)]+=mark[p]*(len/2);
        mark[p]=0;
    }
    void build(int l,int r,int p)
    {
        if(l==r)
        {
            tree[p]=dat[l];
            mark[p]=0;
            sum+=tree[p];
            return ;
        }
        int m=(l+r)/2;
        build(l,m,ls(p));
        build(m+1,r,rs(p));
        tree[p]=tree[ls(p)]+tree[rs(p)];
        sum+=tree[p]*(r-l+1);
        mark[p]=0;
    }
    void update(int L,int R,int x,int l,int r,int p)
    {
        if(R<l||r<L)
            return ;
        if(R>=r&&L<=l)
        {
            // cout<<tree[l];
            
            tree[p]+=(r-l+1)*x;
            sum+=(r-l+1)*x*(r-l+1);
            if(r>l)
            {
                int length=r-l+1;
                int cnt=0;
                int k=length;
                while(k)
                {
                    k/=2;
                    cnt+=k;
                }

                sum+=cnt*x*length;
                mark[p]+=x;
            }
            
            // cout<<tree[l]<<endl;
            return ;
        }  
        push_down(p,r-l+1);
        int m=(l+r)/2;
        update(L,R,x,l,m,ls(p));
        update(L,R,x,m+1,r,rs(p));
        sum+=(tree[ls(p)]+tree[rs(p)]-tree[p])*(r-l+1);
        tree[p]=tree[ls(p)]+tree[rs(p)];
    }

int *dat,*tree,*mark;
int len ,sum=0;
};
const int N=1e6+5;
int A[N];
int n,m,op,x,y,k;
signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>A[i];
    Segtree st(A,n);
    while(m--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        st.update(x,y,z);
        cout<<st.aa()<<"\n";
    }
    // cout<<st.aa();
    return 0;
}