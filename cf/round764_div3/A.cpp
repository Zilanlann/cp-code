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
vector<int> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, m;
    long long mid;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> a[j];
        }
        sort(a, a + m);
        if (m % 2 == 0)
            mid = a[(m+1)/2];
        else
            mid = a[m/2];
        ans.push_back((a[m-1] - mid) + (mid - a[0]));
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }
    


	return 0;
}