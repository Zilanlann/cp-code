#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    int n;
    cin >> n;
    set<string> se;
    string s = to_string(n);
    if (n < 55) {
        for (int i = 1; i <= n; i++) {
            se.insert(to_string(i));
        }
    }
    else {
        int tmp = 1;
        for (int i = 1; i < s.size(); i++) {
            for (int j = tmp; j <= tmp + 55; j++) {
                se.insert(to_string(j));
            }
            tmp *= 10;
        }
        if (n - tmp < 55) {
            for (int i = tmp; i <= n; i++) {
                se.insert(to_string(i));
            }
        }
        else {
            for (int i = tmp; i <= tmp + 55; i++) {
                se.insert(to_string(i));
            }
        }
    }
    int cnt = 0;
    for (auto iter = se.begin(); ; iter++) {
        if (cnt == 50)
            break;
        cout << *iter << ".mp4" << "\n";
        cnt++;
    }

    return 0;
}
