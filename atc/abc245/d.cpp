#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

const int maxn = 200;
ll a[maxn], b[maxn], c[maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n + m; i++) {
        cin >> c[i];
    }
    for (int i = m; i >= 0; i--) {
        b[i] = c[i + n] / a[n];
        for (int j = 0; j <= n; j++) {
            c[i + j] -= a[j] * b[i];
        }
    }
    for (int i = 0; i <= m; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";


    return 0;
}
