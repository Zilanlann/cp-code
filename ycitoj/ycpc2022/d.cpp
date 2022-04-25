#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
	
	string s;
	getline(cin, s);
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '-')
			cout << "\n";
		else
			cout << s[i];
	}
	

	return 0;
}