#include <iostream>

//1748 �� �̾�� ����
//���� Ǯ���� ���� �ϴٰ� �հ��� �ϰ��� �ٷ� Ǯ����.
// ���� �հ��� ���� 

using namespace std;

int main() {
	
	long long int size=0;
	int N;
	int addCount=1;
	int count=9;
	
	cin >> N;
	
	while(N) {
		if(N-count>=0) {
			N-=count;
			size+=count*addCount++;
			count*=10;
		}
		else {
			size+=N*addCount;
			N-=N;
		}
	}
	
	cout << size;
	
	return 0;
}
