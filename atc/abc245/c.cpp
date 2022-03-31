#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;

using namespace std;

const int maxn = 2e5 + 5;
int n, k;
int a[maxn], b[maxn];
bool f[2][maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    f[0][1] = 1, f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        int a1 = abs(a[i] - a[i - 1]);
        int a2 = abs(b[i] - a[i - 1]);
        int b1 = abs(a[i] - b[i - 1]);
        int b2 = abs(b[i] - b[i - 1]);
        //cout << a1 << " " << a2 << " " << b1 << " " << b2 << "\n";
        if (f[0][i - 1]) {
            if (a1 <= k)
                f[0][i] = 1;
            if (a2 <= k)
                f[1][i] = 1;
        }
        if (f[1][i - 1]) {
            if (b1 <= k)
                f[0][i] = 1;
            if (b2 <= k)
                f[1][i] = 1;
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << f[0][i] << " ";
    // }
    // cout << "\n";
    // for (int i = 1; i <= n; i++) {
    //     cout << f[1][i] << " ";
    // }
    // cout << "\n";
    if (f[0][n] || f[1][n])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
