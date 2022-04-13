#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	freopen("A10.in", "w", stdout);
	srand((unsigned)time(NULL));
	// int tmp = 10;
	// cout << tmp << "\n";
	// int a = -1e6, b = 1e6;
	// //int c = 1, d = 2e5;
	// while (tmp--){
	// 	cout << 40 << "\n";
	// 	for (int i = 1; i <= 40; i++) {
	// 		cout << (rand() % (b-a+1))+ a;
	// 		if (i == 40)
	// 			cout << "\n";
	// 		else
	// 			cout << " ";
	// 	}
	// 	//cout << (rand() % (b-a+1))+ a << " " << (rand() % (d-c+1))+ c << "\n";
	// }
	for (int i = 0; i < 10000; i++) {
		int a = (rand() % (25 - 0 + 1)) + 0;
		cout << char('a' + a);
	}
	cout << "\n" << 300 << "\n";
	for (int i = 0; i < 300; i++) {
		int l = (rand() % (10000 - 1 + 1)) + 1;
		int r = (rand() % (10000 - l + 1)) + l;
		int k = (rand() % (1000000 - 1 + 1)) + 1;
		cout << l << " " << r << " " << k << "\n";
	}
	


	return 0;
}