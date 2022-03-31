#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

typedef long long ll;
#define endl "\n"

using namespace std;

string s;
vector<ll> ve;
set<string> se;
ll len;

void pre() {
    ve.clear();
    ll k = 0;
    for (ll i = 1; i <= len; i++) {
        se.clear();
        for (ll j = 0; j < len - i + 1; j++) {
            se.insert(s.substr(j, i));
        }
        k += se.size();
        ve.push_back(k);
    }
}

void solve() {
    ll n;
    cin >> n;
    auto iter = lower_bound(ve.begin(), ve.end(), n);
    if (iter == ve.end()) {
        cout << "-1 -1" << endl;
        return;
    }
    else {
        ll pos, tmp;
        se.clear();
        if (*iter == n) {
            tmp = iter - ve.begin() + 1;
            pos = 0;
        }
        else {
            tmp = iter - ve.begin() + 1;
            pos = n - *(iter - 1) - 1;
        }
        for (ll i = 0; i < len - tmp + 1; i++) {
            se.insert(s.substr(i, tmp));
        }
        //cout << tmp << " " << pos << "  ";
        vector<string> ans(se.begin(), se.end());
        ll a = s.find(ans[pos]) + 1;
        cout << a << " " << a + tmp - 1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> s;
    len = s.size();
    pre();
    // for (auto v : ve)
    //     cout << v << " ";
    // cout << endl;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
