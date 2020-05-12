#include <stdio.h>

//1850 �ִ����� ����
//����Լ��� ǥ�� 

long long int Euclidean(long long int a, long long int b) {
	
	long long int temp;	
	if(a<b) {
		temp=a;
		a=b;
		b=temp;
	}
	temp=a%b;
	if(temp==0) return b;
	else Euclidean(b, temp);	
	//Ǯ���� ���ͳ� Ȯ���ߴ���
	/*
	return b ? Euclidean(b, a%b) : a;
	�̷������� �������,,, ����  
	*/ 
}

int main() {
	
	long long int A, B;
	scanf("%lld %lld", &A, &B);

	int i;
	for(i=0; i<Euclidean(A, B); i++) printf("1");
	
	return 0;
}
