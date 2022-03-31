#include <iostream>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 2e5 + 5;
ll arr[maxn], vis[maxn];

void solve(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        vis[i] = 0;
    }
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = 0, pos = 0;
    for (int i = 0; i < n - 1; i++){
        if (vis[i] != 1){
            pos = lower_bound(arr + pos, arr + n, m * arr[i]) - arr;
            if (arr[pos] > m * arr[i])
                continue;
            if (pos < n && vis[pos] == 0){
                vis[i] = 1;
                vis[pos] = 1;
                pos++;
                ans++;
            }
        }
    }
    ans = n - 2 * ans;
    cout << ans << endl;
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
