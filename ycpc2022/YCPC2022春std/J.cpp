#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define int long long
using namespace std;
const int maxn = 205;
int n, q;
int A[maxn];
int B[maxn];
vector<int> bound;
vector<int> ans;

int find_place(int x)
{
    return upper_bound(bound.begin(), bound.end(), x) - bound.begin();
}

int solve(int k)
{
    memset(B, 0x3f, sizeof(B));
    for (int i = 1; i <= n; i++)
        *lower_bound(B + 1, B + 1 + n, abs(A[i] - k)) = abs(A[i] - k);
    return lower_bound(B + 1, B + 1 + n, 0x3f3f3f3f) - (B + 1);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    ans.resize(q + 1);

    vector<pair<int, int>> qs;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        bound.push_back(A[i] + 1);
    }
    bound.push_back(0x3f3f3f3f);
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            bound.push_back((A[i] + A[j]) / 2 + 1);
            bound.push_back((A[i] + A[j]) / 2);
        }

    sort(bound.begin(), bound.end());
    bound.erase(unique(bound.begin(), bound.end()), bound.end());
    // init qs and sort
    {
        for (int i = 1; i <= q; i++)
        {
            int num;
            cin >> num;
            qs.push_back({num, i});
        }
        sort(qs.begin(), qs.end());
    }
    int last_v = 0, last_idx = -1;
    for (auto [q, pos] : qs)
    {
        int idx = find_place(q);
        if (last_idx != idx)
        {
            last_v = solve(q);
            last_idx = idx;
            ans[pos] = last_v;
        }
        else
            ans[pos] = last_v;
    }
    for (int i = 1; i <= q; i++)
        cout << ans[i] << "\n";
    return 0;
}