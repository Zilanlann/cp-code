#include <iostream>
using namespace std;
typedef long long ll;

const int maxn = 1e5 + 5;
int n, t, cnt;
int a[maxn], b[maxn];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> a[i];
    b[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        b[i] = max(a[i], b[i + 1]);
    }
    int maxx = 0;
    for (int i = 0; i < n - 1; i++) {
        int tmp = b[i + 1] - a[i];
        if (maxx < tmp) {
            cnt = 1;
            maxx = tmp;
        } else if (maxx == tmp)
            cnt++;
    }
    cout << cnt << "\n";

    return 0;
}
