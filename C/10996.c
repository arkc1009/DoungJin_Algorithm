#include <stdio.h>

//�����-21 ����    ���� �׳� for�� �ΰ��Ἥ Ȧ��¦�� �������� ����ߴٰ� ������ó�� fm���� ���  

int main() {
	
	int input;
	int i, j;
	int flag=1;
	int fm=-1;
	scanf("%d", &input);
	
	for(i=1; i<=input*2; i++) {
		for(j=1; j<=input; j++) 
			if(j%2==flag) printf("*"); //Ȧ¦ �Ǻ�  
			else printf(" ");
			
		flag+=fm;
		fm*=-1;
		printf("\n");
			
	}
	
	
	
	return 0;
}
