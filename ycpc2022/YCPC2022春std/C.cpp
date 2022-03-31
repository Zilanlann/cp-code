#include <iostream>
using namespace std;

int a, b, c, d;
int k, m;
void solve()
{
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        cout << "-1"
             << "\n";
        return;
    }
    k = (b - d) / (a - c);
    m = b - a * k;
    cout << k << " " << m << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}