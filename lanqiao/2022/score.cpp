#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    double a[10] = {5, 5, 10, 10, 0, 15 * 0.7, 0, 0, 25 * 0.4, 0};
    double ans = 0;
    for (int i = 0; i < 10; i++) {
    	cout << char('A' + i) << " " << a[i] << "\n";
    	ans += a[i];
    }
    cout << ans << "\n";


    return 0;
}
