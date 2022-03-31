#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int n, m, v[1001], w[1001], f[1001];
vector<int> ve[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //IO

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	int x;
    	cin >> x >> v[i] >> w[i];
    	ve[x].push_back(i);
    }
    for (int i = 1; i <= 1000; i++)
    	for (int j = m; j; j--)
    		for (auto k : ve[i])
    			if (v[k] <= j)
					f[j] = max(f[j], f[j - v[k]] + w[k]);

    cout << f[m] << "\n";

    return 0;
}
