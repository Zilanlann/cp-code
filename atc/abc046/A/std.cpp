#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main() {
    set<int> se;
    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        se.insert(a);
    }
    cout << se.size() << "\n";

    return 0;
}
