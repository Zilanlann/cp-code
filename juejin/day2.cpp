#include <iostream>

typedef long long ll;
using namespace std;

int n, k, ans, tmp = 1, l, r;

int main(){
    cin >> n >> k;
    int a[n + 1];
    a[n] = k + 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
    	tmp *= a[i];
    	if (tmp > k) {
    		ans += (r - l + 1) * (r - l + 2) / 2;
    		while (tmp > k) {
    			tmp /= a[l++];
    		}
    	}
    	r = i;
    }
    if (l + 1 != r) ans += (r - l + 1) * (r - l + 2) / 2;
    cout << ans << "\n";

    return 0;
}
