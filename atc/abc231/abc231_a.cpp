// Author: chrisann
// Date: 2022-04-14 19:50:32
// Problem: A - Water Pressure
// Contest: AtCoder - Panasonic Programming Contest 2021(AtCoder Beginner
// Contest 231) URL: https://atcoder.jp/contests/abc231/tasks/abc231_a Memory
// Limit: 1024 MB Time Limit: 2000 ms

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

    db n;
    cin >> n;
    n /= 100;
    cout << n;

    return 0;
}
