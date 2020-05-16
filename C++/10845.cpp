#include <iostream>
#include <queue>
#include <string>

//10845 큐 문제 
//이것도 큐 그냥 써서 풀었는데 왜 안되나 싶었더니
//pop() 이 출력까지 하는거였네? 깔깔깔 

using namespace std;

int main() {
	
	queue<int> a;
	string input;
	int testcase;
	int value;
	
	cin >> testcase;
	
	for(int i=0; i<testcase; i++) {
		cin >> input;
	
		if(input=="push") {
			cin >> value;
			a.push(value);
			
		}
		else if(input=="pop") {	
			if(a.empty()) cout << "-1" << '\n';
			else {
				cout << a.front() << '\n';
				a.pop();
			}
		}
		else if(input=="size") cout << a.size() << '\n';
		else if(input=="empty") cout << a.empty() << '\n';
		else if(input=="front") {
			if(a.empty()) cout << "-1" << '\n';
			else cout << a.front() << '\n';
		}
		else if(input=="back") {
			if(a.empty()) cout << "-1" << '\n';
			else cout << a.back() << '\n';
		}
	}
	
	
	
	return 0;
}
