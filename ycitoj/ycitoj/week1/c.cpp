#include <iostream>
#include <vector>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

vector<int> vec = {1,2,3,7,19,51,131,323,771,1795,4099,9219,20483,45059,98307,212995,458755,983043,2097155,4456451,9437187,19922947,41943043,88080387,184549379,385875971,805306371,1677721603};

void solve(){
    int k;
    cin >> k;
    auto iter = lower_bound(vec.begin(), vec.end(), k);
    if (*iter == k)
        cout << iter - vec.begin() << endl;
    else
        cout << iter - vec.begin() - 1 << endl;
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
