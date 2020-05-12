#include <stdio.h>

//1850 최대공약수 문제
//재귀함수로 표현 

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
	//풀고나서 인터넷 확인했더니
	/*
	return b ? Euclidean(b, a%b) : a;
	이런식으로 만들던ㄷ,,, 끌끌  
	*/ 
}

int main() {
	
	long long int A, B;
	scanf("%lld %lld", &A, &B);

	int i;
	for(i=0; i<Euclidean(A, B); i++) printf("1");
	
	return 0;
}
