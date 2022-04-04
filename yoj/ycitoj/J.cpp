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

int func(int a[], int n, int t);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];

    }
    int c[n];
    for(int i = 0; i < n; i ++){
        a[i] = a[i] / 3;
        c[i] = func(a, n, t);

    }
    sort(c, c + n);
    cout << c[0] << endl;

    return 0;
}

int func(int a[], int n, int t){
    int count;
    int b[n];
    for(int i = 0; i < n; i ++){
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; i ++){
        if(t >= 0){
            t = t - b[i];
            count ++;
        }
        else{
            count --;
            break;
        }
    }
    return count;

}