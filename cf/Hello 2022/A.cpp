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

    int t,n,k;
    cin>>t;
    for(int i1=0;i1<t;i1++){
        cin>>n>>k;
        int a[n][n];

        for(int r1 = 0;r1<n;r1++){
            for(int c1 = 0;c1<n;c1++){
                while(int i2<=k){
                    if(a[r1][c1]!=1)
                        a[r1][c1] = 1;
                }


            }
        }

        
    }




	return 0;
}