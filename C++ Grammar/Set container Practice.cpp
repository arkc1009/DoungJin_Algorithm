#include <iostream>
#include <set>

//set을 사용 해 볼 까 ♬ㅎㅎㅎㅀㅀㄹ

using namespace std;

int main() {
	
//아 Ctrl + / 잘뫃ㅅ 눌렀다가 다 날라감 ㅋㄹㅋㅋㄹㅋ

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
