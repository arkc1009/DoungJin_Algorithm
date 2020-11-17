#include <iostream>

using namespace std;

int fac(int n) {
	int sum=1;
	for(int i=2; i<=n; i++) {
		sum*=i;
	}
	return sum;
}

int main() {
	
	int N, K;
	
	cin >> N >> K;
	
	cout << fac(N)/(fac(N-K)*fac(K));
	
	return 0;
}
