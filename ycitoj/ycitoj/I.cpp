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


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, count = 0, ans;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ans = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] == ans + 1 || a[i] == ans + 2)
            count ++;
        else{
            ans = a[i];

        }
    }
    cout << count << endl;


	return 0;
}