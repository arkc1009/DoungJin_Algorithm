#include <iostream>
#include <string>
#include <algorithm>

//10988 �Ӹ�������� Ȯ���ϱ� ����
//reverse �Լ� �Ἥ �����
//�Լ� �ƴϸ� �������� �߾ ������? 

using namespace std;

int main() {
	
	string input;
	
	cin >> input;
	
	string temp=input;
	reverse(input.begin(), input.end());
	
	if(temp==input) cout << 1;
	else cout << 0;
	
	return 0;
}
