#include <iostream>
#include <algorithm>
#include <stack>

//10799 쇠막대기 문제
//스택,,문제,, 드디어,, 뭔가 스스로 스택스럽게 풀었,,나,,?
//암튼 뿌-듯 

using namespace std;

int main() {
	
	stack<int>stick;
	
	string input;
	cin >> input;
	
	int allCount=0;
	
	for(int i=0; i<input.length(); i++) {
		if(input[i]=='(') {
			stick.push(1);
		}
		else if(input[i]==')' && input[i-1]==')') {
			stick.pop();
			allCount++;
		}
		else if(input[i]==')') {
			stick.pop();
			allCount+=stick.size();
		}
	}
	
	cout << allCount;
	
	return 0;
}
