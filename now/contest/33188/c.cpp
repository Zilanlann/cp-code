#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;
int n;
string a[N];
vector<pair<string, pair<int, int> > > ve;

bool cmp(const string& a, const string& b) {
    return a + b < b + a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int maxx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int x = a[i].size();
        maxx = max(maxx, x);
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << "\n";

    return 0;
}