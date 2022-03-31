#include <iostream>
#include <vector>
#include <bitset>

typedef long long ll;

using namespace std;

bitset<10001> f;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    f[0] = 1;
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        f = (f << a) | (f << b);
    }
    cout << (f[x] == 1 ? "Yes" : "No") << "\n";

    return 0;
}
