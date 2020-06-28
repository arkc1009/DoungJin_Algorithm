#include <stdio.h>
#include <stdlib.h>

//평균 문제   성적을 입력받음과 동시에 최대값 저장 후 double형 배열에 새로운 성적을 저장 

int main() {
	
	int input, i;
	int max=0;
	scanf("%d", &input);
	
	int *grade=malloc(sizeof(int)*input);
	double *new_grade=malloc(sizeof(double)*input);
	double all_grade=0;
	
	for(i=0; i<input; i++) {
		scanf("%d", &grade[i]);
		if(max<grade[i]) max=grade[i];	//최대값 검사 
	}
	
	for(i=0; i<input; i++) {
		new_grade[i]=(double)grade[i]/max*100; //새로 넣어주기 
		all_grade+=new_grade[i]; //총합 
	}
	
	printf("%f", all_grade/input);
	
	free(grade);
	free(new_grade);
	return 0;
} 
