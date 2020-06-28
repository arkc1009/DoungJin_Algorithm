#include <stdio.h>

//별찍기-9 문제   count변수를 써서 count값이 늘어갈수록 처음와 끝에 별이 출력안되게 함 
//  별찍기-13 처럼 for문을 두개 돌리려다 fm변수를 써서 count의 값이 중앙을 지나면 점점 줄어들게 함  

int main() {
	
	int input;
	int i, j;
	int count=0;
	int fm=1;
	
	scanf("%d", &input);
	
	input=input*2-1;
	
	for(i=0; i<input; i++) {
		for(j=1; j<=input; j++) {
			if(j>count && j<=input-count) printf("*"); //count값에 따라서 처음, 끝을 제외하고만 별이 출력되게 
			else if(j<=count) printf(" "); // 별뒤쪽 공백이 있으면 오류뜨길래 따로 뺌 
		}
		
		if(count==input/2) fm=-1; //별이 중앙까지 출력되면 count값이 줄어들게끔 
		
		count+=fm*1;
		printf("\n");
	}
	
	
	return 0;
}
