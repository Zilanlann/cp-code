#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n;
    cin >> n;
    vector<int> ve(n);
    for (auto& v : ve)
        cin >> v;
    int maxx = 0;
    for (auto v : ve)
        maxx = max(v, maxx);
    cout << maxx << "\n";

    return 0;
}
