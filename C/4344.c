#include <stdio.h>
#include <stdlib.h>

//����� �Ѱ��� ����   �Է¹��� ������ ���� ����� ���� ��պ��� ū �л��� ����ִ��� �˻� �� ������ ��ȯ
//�ݺ����� �������� ������ �ʱ�ȭ ���ִ°� ���� ������ �� 

int main() {
	
	int input, i, j, tempcase;
	float avg;
	float ratio;
	
	scanf("%d", &input);
	
	int *student; //student[1000] �� �ʹ� �����غ����� ����,��,,�� 
	
	for(i=0; i<input; i++) {
		tempcase=0; // �Ʒ� 3�ٱ��� �׻� �ʱ�ȭ �ʿ�  
		ratio=0;
		avg=0;
		scanf("%d", &tempcase);
		student=malloc(sizeof(int)*tempcase); // �л� ���� �����ٶ����� ũ�� ���� 
		for(j=0; j<tempcase; j++) {
			scanf("%d", &student[j]);
			avg+=student[j]; //��պ����� �հ踦 ���س��� 
		}
		avg/=tempcase; // ��� ���ϱ� 
		for(j=0; j<tempcase; j++) {
			if(student[j]>avg) ratio++; //��պ��� ���� �л� �˻��� ī��Ʈ 
		}	
		printf("%.3f%%\n", (ratio/tempcase)*100); // ���� ��� 
		free(student); //�ʼ� ������ ���� �ع� 
	}
	
	return 0;
}
