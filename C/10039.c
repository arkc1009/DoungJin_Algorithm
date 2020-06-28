#include <stdio.h>

//평균점수 문제   입력받을 때 보충수업, 합계 구해놓고 출력할때 평균값.  

int main() {
	
	int grade[6]={0};
	int i;
	
	for(i=0; i<5; i++) {
		scanf("%d", &grade[i]);
		if(grade[i]<40) grade[i]=40; //보충수업 
		grade[5]+=grade[i]; // 총합  
	}
	
	printf("%d", grade[5]/5);
	
	return 0;
}
