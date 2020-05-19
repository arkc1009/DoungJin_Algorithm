#include <iostream>
#include <list>

using namespace std;

int main() {
	
	list<char> text;
	list<char>::iterator cur;
	list<char>::iterator cur2;
	string input;
	
	cin >> input;
	
	for(int i=0; i<input.length(); i++) text.push_back(input[i]);
	
	int testcase;
	
	cin >> testcase;
	char command;
	cur=text.end();
	for(int i=0; i<testcase; i++) {
		cin >> command;
		
		if(command == 'P') {
			char value;
			cin >> value;
			text.insert(cur, value);
		}
		else if(command == 'L') {
			if(cur!=text.begin()) cur--;
		}
		else if(command == 'D') {
			if(cur!=text.end()) cur++;
		}
		else if(command == 'B') {
			if(cur!=text.begin()) {
				cur2=--cur;
				cur++;
				text.erase(cur2);	
			}
		}
	}

	for(cur=text.begin(); cur!=text.end(); cur++) cout << *cur;
	
	return 0;
}
