#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

vector<int> ve;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    ll k;
    cin >> k;
    ll a = 1;
    while (a <= k) {
         ve.push_back(((k & a) ? 2 : 0));
         a <<= 1;
    }
    reverse(ve.begin(), ve.end());
    for (auto v : ve)
        cout << v;


    return 0;
}

//19:14.17
