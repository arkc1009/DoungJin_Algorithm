#include <stdio.h>
#include <string.h>

//OX���� ����  strlen����ؼ� �ݺ��� ���� 

int main() {
	
	int i, j, k, input;
	int count;
	int all;
	scanf("%d", &input);
	
	char OX[80];
	for(i=0; i<input; i++) {
		count=0; //������ ���� ������ �׻� �ʱ�ȭ 
		all=0; // ���� ���� 
		scanf("%s", OX);
		for(j=0; j<strlen(OX); j++) {
			if(OX[j]=='O') count++; //O�̸� count�� 1�� �÷��� ���ӵǴ� ��ŭ ���� �����ϰԲ� 
			else count=0; // X�� ������ 0���� �ʱ�ȭ  
			all+=count;
		}
		printf("%d\n", all);
	}
	
	return 0;
}
