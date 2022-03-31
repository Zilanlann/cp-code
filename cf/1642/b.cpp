#include <iostream>
#include <set>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 3e5 + 5;
int arr[maxn];

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    set<int> ans(arr, arr + n);
    int num = ans.size();
    for (int i = 1; i <= n; i++){
        if (i <= num)
            cout << num << " ";
        else
            cout << i << " ";
    }
    cout << endl;

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
