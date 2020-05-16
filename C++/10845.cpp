#include <iostream>
#include <queue>
#include <string>

//10845 ť ���� 
//�̰͵� ť �׳� �Ἥ Ǯ���µ� �� �ȵǳ� �;�����
//pop() �� ��±��� �ϴ°ſ���? ���� 

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
