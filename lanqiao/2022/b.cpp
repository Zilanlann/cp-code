#include <bits/stdc++.h>

using namespace std;

bool solve(string v) {
	for (int i = 0; i < 8 - 2; i++) {
		if (v[i + 2] == v[i + 1] + 1 && v[i + 1] == v[i] + 1) {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//IO
	
	//freopen("bout.txt", "w", stdout);
	int cnt = 0;
	string s = "2022";
	for (int i = 1; i <= 12; i++) {
		string str = s;
		if (i < 10) {
			str += '0';
		}
		str += to_string(i); 
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			for (int j = 1; j <= 31; j++) {
				string v = str;
				if (j < 10) {
					v += '0';
				}
				v += to_string(j); 
				if (solve(v)) cnt++;
				//cout << v << '\n';
			}
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			for (int j = 1; j <= 30; j++) {
				string v = str;
				if (j < 10) {
					v += '0';
				}
				v += to_string(j); 
				if (solve(v)) cnt++;
				//cout << v << '\n';
			}
		}
		else {
			for (int j = 1; j <= 28; j++) {
				string v = str;
				if (j < 10) {
					v += '0';
				}
				v += to_string(j); 
				if (solve(v)) cnt++;
				//cout << v << "\n";
			}
		}
	}
	cout << cnt << "\n";
	
	return 0;
} 
