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




int func1(int a[], int x){
    int ans = 0;
    for (int i = 0; i < x; i++){
        ans += (a[i] * pow(2, i));
    }
    return ans;
}

    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int z;
    cin >> z;
    for (int j = 0; j < z; j++){
        int n, m;
        cin >> n >> m;
        int a[n], b[100], x = 0, y = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            while (a[i] != 0){
                if (a[i] % 2 == 1){
                    b[x]++;
                    x++;
                }
                else{
                    x++;
                }

                a[i] /= 2;
            }
            if (y < x)
                y = x;
            x = 0;

        }
        for (int i = 0; i < y; i++){
            if (b[i] > (n - b[i]))
                b[i] = 1;
            else
                b[i] = 0;
        }
        cout << func1(b, y) << endl;
    }
    
    


	return 0;
}