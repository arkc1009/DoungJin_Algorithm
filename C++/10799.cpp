#include <iostream>
#include <algorithm>
#include <stack>

//10799 �踷��� ����
//����,,����,, ����,, ���� ������ ���ý����� Ǯ��,,��,,?
//��ư ��-�� 

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
