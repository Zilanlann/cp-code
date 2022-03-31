#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        se.insert(a);
    }
    int tmp = 0;
    bool flag = true;
    for (auto v : se) {
        if (tmp != v) {
            cout << tmp << "\n";
            flag = false;
            break;
        }
        tmp++;
    }
    if (flag)
        cout << tmp << "\n";

    return 0;
}
