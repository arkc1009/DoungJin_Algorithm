#include <iostream>

//2292 ���� ����
//������ C�� Ǯ�����µ� �׳� �ٽ� Ǯ��� �; Ǯ����.
//�׶����� �� ������ ���� ã�Ƽ� �� �����ϰ� �ذ�!  

using namespace std;

int main() {
	
	int N, i;
	int count=0;
	
	cin >> N;
	for(i=1; N-1>count*6; i++) {
		count+=i;
	}
	
	cout << i;
	
	return 0;
}
