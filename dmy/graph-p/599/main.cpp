#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
    vector<int> ve;
    
    cin >> n;
    cout << (1ll << (n * (n - 1) / 2)) << "\n";
    return 0;
}
