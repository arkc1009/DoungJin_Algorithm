#include <stdio.h>

//�����-13 ����  �׳� �ݺ���  

int main() {
	
	int input;
	int i, j;
	
	scanf("%d", &input);
	
	for(i=0; i<input; i++) { // ���� ���� �þ�� ��  
		for(j=0; j<=i; j++) printf("*");
		printf("\n");
	}
	
	for(i=i-2; i>=0; i--) { // �Ʒ��� ���� �پ��� ��  
		for(j=0; j<=i; j++) printf("*");
		printf("\n");
	}
	
	return 0;
}
