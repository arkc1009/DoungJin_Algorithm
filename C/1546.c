#include <stdio.h>
#include <stdlib.h>

//��� ����   ������ �Է¹����� ���ÿ� �ִ밪 ���� �� double�� �迭�� ���ο� ������ ���� 

int main() {
	
	int input, i;
	int max=0;
	scanf("%d", &input);
	
	int *grade=malloc(sizeof(int)*input);
	double *new_grade=malloc(sizeof(double)*input);
	double all_grade=0;
	
	for(i=0; i<input; i++) {
		scanf("%d", &grade[i]);
		if(max<grade[i]) max=grade[i];	//�ִ밪 �˻� 
	}
	
	for(i=0; i<input; i++) {
		new_grade[i]=(double)grade[i]/max*100; //���� �־��ֱ� 
		all_grade+=new_grade[i]; //���� 
	}
	
	printf("%f", all_grade/input);
	
	free(grade);
	free(new_grade);
	return 0;
} 
