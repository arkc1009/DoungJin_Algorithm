#include <iostream>
#include <stack>
#include <string>

//10828 스택 문제
//그냥 스택 구현? 큐랑 똑같았따. 

using namespace std;

int main() {
	
	stack<int>s;
	
	int N, input;
	cin >> N;
	
	string command;
	for(int i=0; i<N; i++) {
		cin >> command;
		if(command=="push") {
			cin >> input;
			s.push(input); 
		}
		else if(command=="pop") {
			if(s.empty()) cout << -1;
			else {
				cout << s.top();
				s.pop();
			}
			cout << endl;
		}
		else if(command=="size") cout << s.size() << endl;
		else if(command=="empty") {
			if(s.empty()) cout << 1;
			else cout << 0;
			cout << endl;
		}
		else if(command=="top") {
			if(s.empty()) cout << -1;
			else cout << s.top();
			cout << endl;
		}
	}	
	
	return 0;
}
