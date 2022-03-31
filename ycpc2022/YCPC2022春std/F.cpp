#include <iostream>
const int maxn = 1e4 + 5;
int f[205][2 * maxn + 105];
int n;
int A[maxn];
using namespace std;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];

    f[0][maxn] = 1;
    //
    for (int i = 1; i <= n; i++)
        for (int j = -maxn; j < maxn; j++)
        {
            if (j - A[i] + maxn >= 0)
                f[i][j + maxn] |= f[i - 1][j - A[i] + maxn];
            f[i][j + maxn] |= f[i - 1][j + A[i] + maxn];
        }

    int ans = 1;
    for (int i = 1; i <= maxn; i++)
    {
        if (f[n][i + maxn])
        {
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}