#include <iostream>
#include <vector>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

struct una{
    int id, x, w; 
};

bool cmp(const una& a, const una& b){
    return a.w > b.w;
}

bool cmp2(const una& a, const una& b){
    return a.x < b.x;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<una> vec(m);
    for (int i = 0; i < m; i++){
        vec[i].id = i + 1;
        cin >> vec[i].x >> vec[i].w;
    }
    sort(vec.begin(), vec.end(), cmp);
    vector<una> vec2(vec.begin() + m - 2 * n, vec.end());
    sort(vec2.begin(), vec2.end(), cmp2);
    // for (auto v : vec2)
    //     cout << v.x << " ";
    ll ans = 0;
    for (int i = 0; i < vec2.size(); i++){
        ans += vec2[i].w;
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++){
        cout << vec2[i].id << " " << vec2[vec2.size() - i - 1].id << endl;
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
