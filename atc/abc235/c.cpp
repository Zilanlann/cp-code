#include <iostream>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;

map<int, vector<int>> ma;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
    	int a;
    	cin >> a;
		ma[a].push_back(i);
    }
    while (t--) {
    	int x, k;
    	cin >> x >> k;
    	if (k > ma[x].size())
    		cout << -1 << "\n";
    	else {
    		cout << ma[x][k - 1] << "\n";
    	}
    }


    return 0;
}
