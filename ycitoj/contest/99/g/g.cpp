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
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

char a[100][100];
int n, m, q, v, x, y, pos;
vector<pair<int, int>> ve = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // IO

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            if (c == '*') {
                x = i, y = j;
                a[i][j] = '.';
            } else
                a[i][j] = c;
        }
    }
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        if (c == 'U')
            v++;
        else if (c == 'D')
            v = max(v - 1, 0);
        else if (c == 'L')
            pos--;
        else if (c == 'R')
            pos++;
        if (pos == -1)
            pos = 7;
        else
            pos %= 8;
        int tmp = v;
        bool fl = 0;
        while (tmp--) {
            fl = 0;
            int xx = x + ve[pos].first, yy = y + ve[pos].second;
            if (xx > n || xx < 1 || yy > m || yy < 1 || a[xx][yy] == '#') {
                fl = 1;
                break;
            }
            if (pos == 1) {
                if (a[x - 1][y] == '#' && a[x][y + 1] == '#') {
                    fl = 1;
                    break;
                }
            } else if (pos == 3) {
                if (a[x][y + 1] == '#' && a[x + 1][y] == '#') {
                    fl = 1;
                    break;
                }
            } else if (pos == 5) {
                if (a[x + 1][y] == '#' && a[x][y - 1] == '#') {
                    fl = 1;
                    break;
                }
            } else if (pos == 7) {
                if (a[x][y - 1] == '#' && a[x - 1][y] == '#') {
                    fl = 1;
                    break;
                }
            }
            x = xx, y = yy;
        }
        if (fl) {
            v = 0;
            cout << "Crash! ";
        }
        cout << x << " " << y << "\n";
    }

    return 0;
}

// handle:Chrisann
// date:2022-07-10 15:55:32
