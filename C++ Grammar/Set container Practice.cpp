#include <iostream>
#include <set>

//set�� ��� �� �� �� �ݤ�����������

using namespace std;

int main() {
	
//�� Ctrl + / �ߑ��� �����ٰ� �� ���� ������������

	set<int>s;
	set<int>::iterator iter; 
	
	s.insert(20);
	int size = s.size();
	iter=s.end();
	cout << *iter << size << endl;
	s.insert(30);
	
	cout << *iter << size << endl;
	
	if(*iter!=s.size()) cout << "check!" << endl;
	
	
	return 0;
} 
