#include <stdio.h>

//�����-9 ����   count������ �Ἥ count���� �þ���� ó���� ���� ���� ��¾ȵǰ� �� 
//  �����-13 ó�� for���� �ΰ� �������� fm������ �Ἥ count�� ���� �߾��� ������ ���� �پ��� ��  

int main() {
	
	int input;
	int i, j;
	int count=0;
	int fm=1;
	
	scanf("%d", &input);
	
	input=input*2-1;
	
	for(i=0; i<input; i++) {
		for(j=1; j<=input; j++) {
			if(j>count && j<=input-count) printf("*"); //count���� ���� ó��, ���� �����ϰ� ���� ��µǰ� 
			else if(j<=count) printf(" "); // ������ ������ ������ �����߱淡 ���� �� 
		}
		
		if(count==input/2) fm=-1; //���� �߾ӱ��� ��µǸ� count���� �پ��Բ� 
		
		count+=fm*1;
		printf("\n");
	}
	
	
	return 0;
}
