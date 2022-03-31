#include <iostream>
#include <string>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    string str;
    char ch;
    cin >> str >> ch;
    for (int i = 0; i < str.size(); i++){
        if (ch == str[i] && i % 2 == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
