#include <iostream>

//2986 �Ľ�Į ����
//��,,, ��,,��,,Į,,, ������,, �̷��� ����,,�µ�,,?
//�ݺ� ���� ������ i<=9 ���� i*i<=N ����
//break ������ (N/i)*i==N ���� N%i==0 ���� �ٲ��ְ�
//�뷫 1�̳� �Ҽ��� �ֵ� if�� ���� ���ִϱ� Ǯ�ȵ�,, ����,,? 

using namespace std;

int main() {
	
	long long int N;
	cin >> N;
	long long int i;
	for(i=2; i*i<=N; i++) {
		if(N%i==0) break;
		
	}
	
	if(i*i>N) i=N;
	if(N==1) N=0;
				
	cout << N-N/i;
	
	return 0;
}
