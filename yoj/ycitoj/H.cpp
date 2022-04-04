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
    char str[1000];
    int count = 0;
    int m = 0;
    char ch;
    while ((ch = getchar()) && ch!=EOF)
    {
        str[m++] = ch;
    }
    if(str[0] <= 'z' && str[0] >= 'a')
        str[0] = str[0] - ('a' - 'A');

    for(int i = 0; i < m; i ++){
        if(count == 0){
            if(str[i] == '.')
                count = 1;
        }
        else{
            if((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
                if(str[i] <= 'z' && str[i] >= 'a')
                    str[i] = str[i] - ('a' - 'A');
                count = 0;
        }

    }
    for(int i = 0; i < m; i ++){
        putchar(str[i]);
    }


	return 0;
}
