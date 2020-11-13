#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	int K;
	stack<int>values;
	long long int sum = 0;
	
	cin >> K;
	
	int input;
	while(K--) {
		cin >> input;
		if(input == 0) values.pop();
		else values.push(input);
	}
	
	while(!values.empty()) {
		sum += values.top();
		values.pop();
	}
	
	cout << sum;
	
	return 0;
}
