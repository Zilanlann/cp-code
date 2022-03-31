#include <iostream>
#include <vector>

#define ll int64_t
#define endl "\n"

using namespace std;

int n;
vector<int> vec, ans, tmp;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 1; i <= n; i++){
            int a;
            cin >> a;
            vec.push_back(a);
        }
    }

    return 0;
}
