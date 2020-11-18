#include <iostream>
#include <algorithm>
#include <cmath>

#define M 31

using namespace std;

int main() {
	
	int L;
	string input;
	
	cin >> L;
	cin >> input;
	
	long long int sum=0;
	for(int i=0; i<input.length(); i++) {
		sum += (int(input[i])-96)*pow(M, i);
	}
	
	cout << sum;
	
	return 0;
}
