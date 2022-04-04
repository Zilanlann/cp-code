#include <iostream>
#include <vector>
#include <algorithm>

#define ll int64_t
#define endl "\n"

using namespace std;

void solve(){
    vector<int> nums(10), ans;
    for (auto& v : nums)
        cin >> v;
    vector<int> copy(nums.begin(), nums.end());
    int sum = 0;
    for (auto v : nums)
        sum += v;

    //first judge
    bool cos = true;
    for (int i = 1; i < 10; i++){
        if (nums[i] > 0)
            cos = false;
    }
    if (cos){
        cout << -1 << endl;
        return;
    }

    //no.1
    for (int i = 1; i < 10; i++){
        if (nums[i] != 0){
            ans.push_back(i);
            nums[i]--;
            break;
        }
    }
    //make
    bool can = true;
    while (can){
        bool a = false;
        int tmp = ans.back();
        for (int i = 0; i < 10; i++){
            if (nums[i] != 0 && i != tmp){
                nums[i]--;
                a = true;
                ans.push_back(i);
                break;
            }
        }
        can = a;
    }
    // for (auto v : ans)
    //     cout << v;
    // cout << endl;

    int tmp;
    bool a = true;
    for (int i = 0; i < 10; i++){
        if (nums[i] != 0){
            tmp = i;
            a = false;
            break;
        }
    }
    if (a){
        for (auto v : ans)
            cout << v;
        cout << endl;
        return;
    }
    else{

        //remake;
        auto iter = lower_bound(ans.begin(), ans.end(), tmp);
        if (iter - ans.begin() - 1 < nums[tmp]){
            cout << -1 << endl;
            return;
        }
        else{
            vector<int> vec1(ans.begin(), iter - nums[tmp] - 1);
            vector<int> vec2(iter - nums[tmp], iter - 1);
            for (auto it = iter; it != ans.end(); it++){
                if (*it != tmp)
                    vec2.push_back(*it);
            }
            sort(vec2.begin(), vec2.end());
            vec1.push_back(tmp);
            for (int i = 0; i < vec2.size(); i++){
                vec1.push_back(vec2[i]);
                vec1.push_back(tmp);
            }
            for (auto v : vec1)
                cout << v;
            cout << endl;
        }
        
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //IO

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
