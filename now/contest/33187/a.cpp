#include <bits/stdc++.h>

using namespace std;
int n;

int f[1010];
int lr(int n, vector<int>& a) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
        }
    }
    ans = f[1];
    for (int i = 1; i <= n; i++) {
        ans = max(f[i], ans);
    }
    return ans;
}
int ls(int n, vector<int>& a) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (a[j] > a[i]) f[i] = max(f[i], f[j] + 1);
        }
    }
    ans = f[1];
    for (int i = 1; i <= n; i++) {
        ans = max(f[i], ans);
    }
    return ans;
}
int main() {
    int ans = 10000;
    // vector<int> a(12, 0);
    int aa[12] = {0,10, 11, 7, 8, 9, 4, 5, 6, 1, 2, 3};
    vector<int> a(aa, aa + 12);

    cout << min(ans, max(lr(11, a), ls(11, a)));
    // for (int i = 1; i <= 11; i++) {
    //     for (int j = 1; j <= i; j++) a[j] = j;
    //     while (next_permutation(a.begin() + 1, a.begin() + i + 1)) {
    //         // int maxx = max(lr(11, a), ls(11, a));
    //         // if (maxx == 4) {
    //         //     for (auto v : a) cout << v << " ";
    //         //     cout << "\n";
    //         //     // break;
    //         // }
    //         ans = min(ans, max(lr(i, a), ls(i, a)));
    //     }
    //     cout << ans << "\n";
    // }


    return 0;
}