#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int n;
int a[100];

bool check(int mid) {
    int tmp = a[0];
    for (int i = 1; i <= n; i++) {
        int x = a[i] - mid;
        int y = a[i] + mid;
        if (tmp < y && tmp >= x)
            tmp = tmp + 1;
        else if (tmp < x)
            tmp = x;
        else
            return false;
    }
    return true;
}

void binary_search() {
    int l = 0, r = 1e9 + 5;
    while (l + 1 < r) {
        int mid = l + ((r - l) >> 1);
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    binary_search();


    return 0;
}
