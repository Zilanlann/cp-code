#include <iostream>
#include <vector>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

ll abs(ll a, ll b){
    if (a <= b)
        return b - a;
    else
        return a - b;
}

void solve(){
    ll n, a, b, c, d;
    ll tmp1, tmp2;
    cin >> n;
    if (n == 1){
        cin >> a >> c;
        cout << abs(a - c) << endl;
    }
    else if (n == 2){
        cin >> a >> b >> c >> d;
        cout << abs(a - c) + abs(b - d) << endl;
    }
    else{
        vector<int> row1(n - 2), row2(n - 2);
        cin >> a;
        for (int i = 0; i < n - 2; i++){
            cin >> row1[i];
        }
        cin >> b >> c;
        for (int i = 0; i < n - 2; i++){
            cin >> row2[i];
        }
        cin >> d;
        sort(row1.begin(), row1.end());
        sort(row2.begin(), row2.end());
        // for (auto v : row1)
        //     cout << v << " ";
        // cout << endl;
        // for (auto v : row2)
        //     cout << v << " ";
        // cout << endl;
        auto it1 = lower_bound(row1.begin(), row1.end(), (c + d) / 2);
        auto it2 = lower_bound(row2.begin(), row2.end(), (a + b) / 2);
        if (it1 == row1.end())
            it1--;
        if (it2 == row2.end())
            it2--;
        if (it1 != row1.begin()){
            tmp1 = min(abs(c - *it1) + abs(d - *it1), abs(c - *(it1 - 1)) + abs(d - *(it1 - 1)));
        }
        else
            tmp1 = abs(c - *it1) + abs(d - *it1);
        if (it2 != row2.begin()){
            tmp2 = min(abs(a - *it2) + abs(b - *it2), abs(a - *(it2 - 1)) + abs(b - *(it2 - 1)));
        }
        else
            tmp2 = abs(a - *it2) + abs(b - *it2);
        //cout << tmp1 << " " << tmp2 << endl;
        ll ans = min({tmp1 + tmp2, abs(a - c) + abs(b - d), abs(a - d) + abs(c - b)});
        cout << ans << endl;
    }
    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
