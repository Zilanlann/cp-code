#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int a, b;
    cin >> a >> b;
    if (b == 1 && a != 1) {
        cout << "Bob\n";
        return 0;
    }
    else if (a == 1 && b != 1) {
        cout << "Alice\n";
        return 0;
    }
    if (a > b) cout << "Alice\n";
    else if (a < b) cout << "Bob\n";
    else cout << "Draw\n";

    return 0;
}
