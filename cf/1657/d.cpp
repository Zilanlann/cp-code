#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    vector<char> ve;
    ve.push_back('(');
    char a = ')';
    if (!ve.empty() && ve.back() == '(' && a == ')')
        ve.pop_back();
    cout << ve.size() << "\n";

    return 0;
}
