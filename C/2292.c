#include <stdio.h>

int main() {
	
	int input;

	int FT=3; //�� �Ʒ� �������� 
	int LR=0; // �翷 ���� ���� 
	int sleep=7; // �� ����2���� ���� ��, �� ������ ��� ���� ī��Ʈ 
	int dream=2; // �߾ӿ��� �󸶳� �������� 
	
	scanf("%d", &input);
	int i=input;
	
	if(input==1) {
		printf("1");
		return 0;
	} 
	
	while(i-sleep>0) {
		i=input;
		FT+=2;
		LR++;
		sleep+=(FT*2)+(LR*2);
		dream++;
	}
	
	printf("%d", dream);
	
	return 0;
}
