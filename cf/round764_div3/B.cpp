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

long long a[3];
vector<int> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, tmp = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[0] >> a[1] >> a[2];
        if (((2 * a[1] - a[2]) % a[0] == 0) && ((2 * a[1] - a[2]) > 0))
            ans.push_back(1);
        else if (((2 * a[1] - a[0]) % a[2] == 0) && ((2 * a[1] - a[0]) > 0))
            ans.push_back(1);
        else if (((a[0] + a[2]) % (2 * a[1]) == 0) && ((a[0] + a[2]) > 0))
            ans.push_back(1);
        else
            ans.push_back(0);
    }

    for (int i = 0; i < ans.size(); i++){
        if (ans[i] == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    


	return 0;
}