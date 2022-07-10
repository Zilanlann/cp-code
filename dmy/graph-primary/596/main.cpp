#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

const int maxn = 1e6 + 6;
int n, k;
int a[maxn];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (k--) {
        int x;
        cin >> x;
        cout << lower_bound(a, a + n, x) - a + 1 << " ";
    }

    return 0;
}
