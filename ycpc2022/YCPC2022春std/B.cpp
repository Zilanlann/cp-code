#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;
int n;

int main()
{
    cin >> n;
    vector<pair<int, int>> points;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int xa = points[i].first, ya = points[i].second;
            int xb = points[j].first, yb = points[j].second;
            mx = max(abs(xa - xb) * abs(ya - yb), mx);
        }
    }
    cout << mx;
}
