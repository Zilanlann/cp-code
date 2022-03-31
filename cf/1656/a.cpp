#include <iostream>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multimap<int, int> ma;
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            ma.insert(make_pair(a, i));
        }
        auto iter = ma.end();
        iter--;
        cout << ma.begin()->second << " " << iter->second << "\n";
    }

    return 0;
}
