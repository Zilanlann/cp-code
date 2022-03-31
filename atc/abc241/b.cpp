#include <iostream>
#include <algorithm>
#include <vector>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 1e3 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    for (auto& v : vec){
        cin >> v;
    }
    sort(vec.begin(), vec.end());
    bool tmp = true;
    for (int i = 0; i < m; i++){
        int a;
        cin >> a;
        auto iter = lower_bound(vec.begin(), vec.end(), a);
        //cout << *iter << " ";
        if (iter != vec.end() && *iter == a){
            vec.erase(iter);
        }
        else{
            tmp = false;
            cout << "No" << endl;
            break;
        }
    }
    if (tmp)
        cout << "Yes" << endl;


    return 0;
}
