// n log n
#include <iostream>
using namespace std;
const int maxn = 1e6 + 6;
int A[maxn];
int n;
int vis[maxn];
int main()
{
    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        m = max(m, A[i]);
        vis[A[i]]++;
    }
    int ans = 1;
    for (int x = 2; x <= m; x++)
    {
        // k*i
        int cnt = 0;
        for (int j = x; j <= m; j += x)
            cnt += vis[j];
        if (cnt >= 2)
            ans = x;
    }
    cout << ans << "\n";
    return 0;
}