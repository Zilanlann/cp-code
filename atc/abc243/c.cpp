#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

const int maxn = 2e5 + 5;
vector<pair<int, pair<int, int>>> a;
int n, b[maxn], c[maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

   	cin >> n;
   	for (int i = 0; i < n; i++) {
   		cin >> b[i] >> c[i];
   	}

    return 0;
}
