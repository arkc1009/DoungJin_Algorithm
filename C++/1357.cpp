#include <iostream>

//1357 ������ ���� ����
//�� �ڸ������ٸ� ������ �����ϰ� �����༭ ���������ν�
//������ �ǰԲ� �ߴµ�. �� ��������
//���� ��� 10���ڸ����� ���������� �տ� 100,1000�� �ڸ��� �Ѵ� ���� 0�̸�
//�ڸ����� ������ �������� 1�̿���� �ߴ�. �׷��� �� �ڸ�������
//�� ���� �ڸ����� ��� ���� 0�̿����� ���ϴ� ���� ������Ű�� �ʾҵ�. 

using namespace std;

int Rev(int a) {

	int num[5]={0};
	int divisor=10000;
	int factor=1;
	int result=0;
	
	for(int i=1; i<=4; i++) {
		num[i]=a%divisor/(divisor/10);
		num[i]*=factor;
		divisor/=10;
		for(int j=i; j>0; j--) {
			if(num[j]!=0) {
				factor*=10;
				break;
			}
		}
		result+=num[i];
	}

	return result;
}


int main() {
	
	int X, Y;
	
	cin >> X >> Y;
	
	cout << Rev(Rev(X)+Rev(Y));
	
	
	return 0;
}
