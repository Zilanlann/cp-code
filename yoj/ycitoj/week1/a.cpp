#include <iostream>
#include <vector>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec1, vec2;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        vec1.push_back(str[str.size() - 1] - '0');
    }
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        vec2.push_back(str[str.size() - 1] - '0');
    }
    if (vec1[n - 1] == 1 || vec1[n - 1] == 2){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if ((vec1[i] == 1 || vec1[i] == 2) && (vec2[i] == 3 || vec2[i] == 4))
            continue;
        else if ((vec2[i] == 1 || vec2[i] == 2) && (vec1[i] == 3 || vec1[i] == 4))
            continue;
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
