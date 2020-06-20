#include <iostream>

using namespace std;

int main() {

	long long int R, r;
	
	cin >> R >> r;
	
	r*=2;
	
	long long int d = R*(R-r);
	
	cout << d;
	
	return 0;
}
