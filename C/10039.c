#include <stdio.h>

//������� ����   �Է¹��� �� �������, �հ� ���س��� ����Ҷ� ��հ�.  

int main() {
	
	int grade[6]={0};
	int i;
	
	for(i=0; i<5; i++) {
		scanf("%d", &grade[i]);
		if(grade[i]<40) grade[i]=40; //������� 
		grade[5]+=grade[i]; // ����  
	}
	
	printf("%d", grade[5]/5);
	
	return 0;
}
