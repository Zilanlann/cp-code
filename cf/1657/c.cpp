#include <iostream>
#include <vector>

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
        string s;
        cin >> s;
        int ans = -1, cnt = 0;
        vector<char> ve;
        for (int i = 0; i < n; i++) {
            if (ve.empty())
                ve.push_back(s[i]);
            else {
                if (ve[0] == '(') {
                    if (s[i] == ')') {
                        ans = i;
                        cnt++;
                        ve.clear();
                    }
                    else {
                        ans = i;
                        cnt++;
                        ve.clear();
                    }
                }
                else {
                    if (s[i] == ')') {
                        ans = i;
                        cnt++;
                        ve.clear();
                    }
                }
            }
        }
        cout << cnt << " " << n - ans - 1 << "\n";
    }


    return 0;
}
