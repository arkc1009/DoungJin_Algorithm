#include <iostream>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	string input;
	cin >> input;
	
	N=0;
	for(int i=0; i<input.size(); i++) {
		N+=(int)input[i]-48;
	}
	
	cout << N;
	
	return 0;
}
