#include <iostream>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

const int maxn = 1e5 + 5;
int a[maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int maxx = 0;
        ll sum = 0;
        for (int i = 1; i <= n; i++){
            maxx = max(maxx, a[i]);
            sum += a[i];
        }
        if (maxx == 0){
            cout << 0 << endl;
            continue;
        }
        if (2 * maxx <= sum)
            cout << 1 << endl;
        else
            cout << 2 * maxx - sum << endl;
        
    }


    return 0;
}
