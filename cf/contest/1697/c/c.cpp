#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// head

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "YES\n";
            continue;
        }
        int aa[3] = {0}, bb[3] = {0};
        for (int i = 0; i < n; i++) {
            if (a[i] == 'a')
                aa[0]++;
            else if (a[i] == 'b')
                aa[1]++;
            else
                aa[2]++;
            if (b[i] == 'a')
                bb[0]++;
            else if (b[i] == 'b')
                bb[1]++;
            else
                bb[2]++;
        }
        if (aa[0] != bb[0] || aa[1] != bb[1] || aa[2] != bb[2]) {
            cout << "NO\n";
            continue;
        }
        bool fl = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i] && b[i] == 'a') {
                fl = 0;
                break;
            }
            if (a[i] != b[i]) {
                if (b[i] == 'b') {
                    int cnt = 0, x = -114514;
                    for (int j = i; j < n; j++) {
                        if (a[j] == 'a')
                            cnt++;
                        else if (a[j] == 'b') {
                            x = j;
                            break;
                        } else if (a[j] == 'c') {
                            cnt = -1;
                            break;
                        }
                    }
                    // cout << cnt << " " << x << " | ";
                    if (cnt != x - i) {
                        fl = 0;
                        break;
                    } else
                        swap(a[x], a[i]);
                } else {
                    int cnt = 0, x = -114514;
                    for (int j = i; j < n; j++) {
                        if (a[j] == 'b')
                            cnt++;
                        else if (a[j] == 'c') {
                            x = j;
                            break;
                        } else if (a[j] == 'a') {
                            cnt = -1;
                            break;
                        }
                    }
                    // cout << cnt << " " << x << " | ";
                    if (cnt != x - i) {
                        fl = 0;
                        break;
                    } else
                        swap(a[x], a[i]);
                }
            }
        }
        if (fl == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-06-12 22:35:45
