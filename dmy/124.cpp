#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

ll n;
ll f[100];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO50

    cin >> n;
    f[1] = 1, f[2] = 2;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << "\n";

    return 0;
}
