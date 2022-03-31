#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

long long a[50];
long long b[50];
vector<int> c;
vector<int> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, m, tmp2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> a[j];
            while (a[j] > m)
                a[j] /= 2;
        }
        for (int j = 0; j < m; j++){
            b[j] = a[j];
            while (b[j] > 1){
                b[j] /= 2;
                if (b[j] <= m){
                    for (int k = 0; k < j - 1; k++){
                        if(b[j] == b[k]){
                            tmp2 = 0;
                            break;
                        }
                        else
                            tmp2 = 1;
                    }
                    if (tmp2 == 1){
                        break;
                    }
                }
            }

            if (tmp2 == 0){
                ans.push_back(0);
                break;
            }
        }
        if (tmp2 == 1)
            ans.push_back(1);


    }
    for (int i = 0; i < ans.size(); i++){
        if (ans[i] == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }


    return 0;
}