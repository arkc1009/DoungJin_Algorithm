#include <iostream>

//18247 �ܿ�ձ� Ƽ�� ���� ����
// �׳�,, ���н�,,? 

using namespace std;

int main() {
	
	int N, M;
	int testcase;
	int answer=-1;
	cin >> testcase;
	
	for(int i=0; i<testcase; i++) {
		cin >> N >> M;
		if(N<12 || M<4) answer=-1;
		else answer=11*M+4;
		cout << answer << endl;
	}
	
	return 0;
}
