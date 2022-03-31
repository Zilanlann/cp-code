#include <iostream>
#include <vector>
#include <set>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 1e5 + 5;
vector<int> row[maxn], col[maxn];
set<int> ss;

void solve(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int a;
            cin >> a;
            row[a].push_back(i), col[a].push_back(j);
            ss.insert(a);
        }
    }
    for (auto it = ss.begin(); it != ss.end(); it++){
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    solve();

    return 0;
}
