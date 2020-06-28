#include <stdio.h>

//1850 최대공약수 문제 
//이걸 어떻게 푸나,, 작은수를 공약수로 두고 A,B가 둘다 나누어떨어질 때 까지 i를 줄이면서 해야되나?
//싶었는데 그러면 무조건 시간초과, 특정 알고리즘을 사용한다는데 그게 무슨 알고리즘인지 몰랐음.
//좀 더 오래 생각했으면 힌트를 안받아도 무슨 알고리즘인지는 몰라도 찾아냈을지도 모르겠다ㅏ.
//암튼 유클리드 호제법이라는게 세상에 존재한다는걸 깨닫게 되었음.
//그거에 맞게 코드를 짜봤는데 나름 맞는듯.  

void swap(long long int *a, long long int *b) {
	long long int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main() {
	
	long long int A, B, i;
	int j;
	
	scanf("%lld %lld", &A, &B);
	
	if(A<B) {
		swap(&A,&B);
	}
	
	i=1;
	
	while(i!=0) { //이부분이 유클리드 호제법! A % B = R 이라는 공식에서 R!=0일때 B % R 을 계산,반복하여 나누어 떨어지면 그때 R이 최대공약수 
		i=A%B;
		A=B; 
		B=i; 
	}
	//while(b!=0) 도 상관X 
	
	for(j=0; j<A; j++) printf("1");
	
	return 0;
}
