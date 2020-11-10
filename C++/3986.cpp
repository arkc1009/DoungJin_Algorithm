#include <iostream>
#include <stack>
using namespace std;

int main() {
	
	int N;
	int count=0;
	cin >> N;
	
	string input;
	while(N--) {
		stack<char>words;
		cin >> input;
		for(int i=0; i<input.length(); i++) {
			if(words.empty()) {
				words.push(input[i]);
				continue;
			}
			if(input[i] == words.top()) {
				words.pop();
			}
			else {
				words.push(input[i]);
			}
		}
		if(words.empty()) count++;
	}
	
	cout << count;
	
	return 0;
}
