#include <iostream>

using namespace std;

int GCD(int a, int b) {
	int temp=1;
	for(int i=0; temp!=0; i++) {
		temp = a%b;
		a=b;
		b=temp;
	}
	return a;
}

int main() {
	
	int a, b;
	cin >> a >> b;
	
	int gcd = GCD(a,b);
	cout << gcd << "\n" << (a*b)/gcd;
	
	return 0;
}
