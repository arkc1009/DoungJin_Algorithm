#include <stdio.h>
#include <stdlib.h>

//�ּ�, �ִ� ����  ��������..�� �ߴٰ� �ð��ʰ��� ���� �ּ� �ִ� �񱳷� Ǯ�� 

int main() {
	
	int input, i, j;
	scanf("%d", &input);
	
	int max=-1000000;
	int min=1000000;
	
	int *su = malloc(sizeof(int)*input);
	for(i=0; i<input; i++) {
		scanf("%d", &su[i]);
		if(max<=su[i]) max=su[i]; //�ִ밪 ���� 
		if(min>=su[i]) min=su[i]; //�ּڰ� ����	
	}
			
	printf("%d %d", min, max);
	
	free(su);
	
	return 0;
}
