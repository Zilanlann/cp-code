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

const int N = 1e6;
int tmp[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int x, y, a;
    cin >> x >> y >> a;
    int ll = 0;
    for(int i = 0; i <= a; i++){
        if(i * y % 100 == 0)
            tmp[ll] = i * y + (a - i) * x;
        else{
            tmp[ll] = (i * y / 100 + 1) * 100 + (a - i) * x;
        }
        ll++;
    }
    sort(tmp, tmp + ll);
    cout << tmp[0] << endl;


    return 0;
}