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
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) {
    return mrand() % x;
}
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
// head

double x, y, d;
const double pi = 3.14159265 / 180;

int main() {
    cin >> x >> y >> d;
    double a = x * cos(d * pi) - y * sin(d * pi);
    double b = x * sin(d * pi) + y * cos(d * pi);
    printf("%.7f %.7f\n", a, b);

    return 0;
}
