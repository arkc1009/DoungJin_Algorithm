#include <stdio.h>

//별찍기-21 문제    원래 그냥 for문 두개써서 홀수짝수 조건으로 출력했다가 전문제처럼 fm변수 사용  

int main() {
	
	int input;
	int i, j;
	int flag=1;
	int fm=-1;
	scanf("%d", &input);
	
	for(i=1; i<=input*2; i++) {
		for(j=1; j<=input; j++) 
			if(j%2==flag) printf("*"); //홀짝 판별  
			else printf(" ");
			
		flag+=fm;
		fm*=-1;
		printf("\n");
			
	}
	
	
	
	return 0;
}
