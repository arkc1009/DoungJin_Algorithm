#include <stdio.h>

//16433 주디와 당근농장 문제
// 처음 심는 당근의 열과 행이 짝수,홀수인지 판별해서
// (1,1) 자리부터 당근이 들어가는지, (1,2) 자리부터 들어가는지 판별
// 판별후에는 일정한 규칙 적용  

int main() {
		
	int N, R, C;
	scanf("%d %d %d", &N, &R, &C);
		
	int i, j;
	int j_temp;
	int temp;
	
	if((R%2)-(C%2)!=0) { // (1,2)부터 당근이 시작될 경우 
		j_temp=0;
		temp=1;
	}
	else{ //(1,1)부터 당근이 시작될 경우 
		j_temp=1;
		temp=-1;
	}
	
	for(i=1; i<=N; i++) {
		for(j=1; j<=N; j++) {
			if(j%2==j_temp) printf("v");
			else printf(".");
		}
		printf("\n");
		j_temp+=temp;
		temp*=-1; //j_temp가 0과 1을 반복되게끔
		//if(j_temp==1) j_temp=0;
		//else j_temp=1; 
		//도 아마도 가능 
	}
	return 0;
}
