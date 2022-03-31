#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < c)
        cout << "Takahashi";
    else if (a == c && b <= d)
        cout << "Takahashi";
    else
        cout << "Aoki";

    return 0;
}
