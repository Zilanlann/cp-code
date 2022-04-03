#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec1, vec0;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        char a;
        cin >> a;
        if (a == '1')
            vec1.push_back(i);
        else if (a == '0')
            vec0.push_back(i);
    }
    vector<int> vec;
    for (int i = vec1.size() - 1; i >= 0; i--)
    {
        if (vec0.size() != 0 && vec1[i] < vec0.back())
        {
            ans += vec1[i];
            vec0.pop_back();
        }
        else
            vec.push_back(vec1[i]);
    }
    reverse(vec.begin(), vec.end());
    if (vec.size() % 2 == 0) {
        for (int i = 0; i < vec.size(); i+=2) {
            ans += vec[i];
        }
    }
    else {
        for (int i = 1; i < vec.size(); i+=2) {
            ans += vec[i];
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}