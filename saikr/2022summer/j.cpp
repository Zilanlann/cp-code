#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int n;
int a[N];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", a + i);
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        if (ans < i) break;
        ans = max(ans, i + a[i]);
    }
    printf("%d\n", ans);

    return 0;
}