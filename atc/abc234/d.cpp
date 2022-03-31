#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

typedef long long ll;

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //IO

    int n, k;
    cin >> n >> k;
    vector<int> ve(n);
    for (auto& v : ve)
        cin >> v;
    priority_queue<int, vector<int>, greater<int>> qe;
    for (int i = 0; i < k; i++) {
        qe.push(ve[i]);
    }
    cout << qe.top() << "\n";
    for (int i = k; i < n; i++) {
        if (qe.top() < ve[i]) {
            qe.pop();
            qe.push(ve[i]);
        }
        cout << qe.top() << "\n";
    }

    return 0;
}
