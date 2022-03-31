#include <iostream>

#define ll int64_t
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int arr[10];
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    int tmp = 0;
    for (int i = 0; i < 3; i++){
        tmp = arr[tmp];
    }
    cout << tmp << endl;


    return 0;
}
