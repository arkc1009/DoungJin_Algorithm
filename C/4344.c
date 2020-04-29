#include <stdio.h>
#include <stdlib.h>

//평균은 넘겠지 문제   입력받은 값들을 토대로 평균을 내고 평균보다 큰 학생이 몇명있는지 검사 후 비율로 변환
//반복문이 돌때마다 변수들 초기화 해주는게 제일 귀찮은 듯 

int main() {
	
	int input, i, j, tempcase;
	float avg;
	float ratio;
	
	scanf("%d", &input);
	
	int *student; //student[1000] 은 너무 무식해보였음 ㅋㅋ,ㅋ,,ㅋ 
	
	for(i=0; i<input; i++) {
		tempcase=0; // 아래 3줄까지 항상 초기화 필요  
		ratio=0;
		avg=0;
		scanf("%d", &tempcase);
		student=malloc(sizeof(int)*tempcase); // 학생 수를 정해줄때마다 크기 지정 
		for(j=0; j<tempcase; j++) {
			scanf("%d", &student[j]);
			avg+=student[j]; //평균변수에 합계를 구해놓음 
		}
		avg/=tempcase; // 평균 구하기 
		for(j=0; j<tempcase; j++) {
			if(student[j]>avg) ratio++; //평균보다 높은 학생 검사후 카운트 
		}	
		printf("%.3f%%\n", (ratio/tempcase)*100); // 비율 출력 
		free(student); //필수 포인터 지정 해방 
	}
	
	return 0;
}
