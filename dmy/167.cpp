#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

const int maxn = 1e5 + 5;
int n, a[maxn], b[maxn], c[maxn][2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i] >> b[i];
    }
    int k = 0, l = 1;
    for (int i = 1; i <= n; i++) {
    	for (; k >= l && b[i] >= c[k][0]; --k);
    	c[++k][0] = b[i];
    	c[k][1] = a[i];
    	cout << c[l][0] << "\n";
    	for (; k >= l && c[l][1] == i; ++l);
    }

    return 0;
}
