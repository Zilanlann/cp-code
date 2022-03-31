#include <iostream>
#include <cmath>
#include <iomanip>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ans = 0;
    if (y1 == y2 && y1 != 0 && y3 < y1){
        ans = fabs(x1 - x2);
    }
    else if (y2 == y3 && y2 != 0 && y1 < y2){
        ans = fabs(x2 - x3);
    }
    else if (y3 == y1 && y1 != 0 && y2 < y3){
        ans = fabs(x1 - x3);
    }
    
    cout << fixed << setprecision(10) << ans << endl;
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
