#include <iostream>
using namespace std;

int n, sum;

int main() {
    //判断度数和的奇偶。
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum & 1)
        cout << "No\n";
    else
        cout << "Yes\n";
}
