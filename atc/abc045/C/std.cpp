#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> dp[11];
string s;
ll ans;

int main() {
    cin >> s;
    dp[0].push_back(0);
    for (int i = 1; i <= s.size(); i++) {
        ll x = stoll(s.substr(0, i));
        for (int j = 0; j < i; j++) {
            for (auto v : dp[j]) {
                dp[i].push_back(v + x);
            }
            x -= pow(10, i - j - 1) * (s[j] - '0');
        }
    }
    for (auto v : dp[s.size()]) ans += v;
    cout << ans << '\n';


    return 0;
}
