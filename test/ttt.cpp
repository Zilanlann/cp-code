#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	freopen("A5.in", "w", stdout);
	// srand((unsigned)time(NULL));
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
	srand((unsigned)time(NULL));
	long long  a = 1e17 + 1, b = 1e18;
	cout << (rand() % (b - a + 1)) + a << "\n";


	return 0;
}