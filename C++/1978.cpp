#include <iostream>

//1978 �Ҽ� ã�� ����
//���� �����佺�״Ͻ��� ü,,? ������ �ߴµ� 
//�ƹ������� �ð��� 2�ʱ淡 c++�� �׳� ���Ʈ ���� ��������
//�ص� �ɰ� ���ҵ� �ִ� �������� 100X1000 = 100000 �̶�� �����ߴµ�
//c++�̶�� 100000������,, 2�ʾȿ� �ȵɸ���,, 

using namespace std;

bool test(int a) {
	if(a==1) return true;
	for(int i=2; i<a; i++) {
		if(a%i==0) return true;
	}
	return false;
}

int main() {
	
	int N, count=0;
	int arr[100];
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
		if(!test(arr[i])) count++;
	}
	
	cout << count << endl;
	
	return 0;
} 
