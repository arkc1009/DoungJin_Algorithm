#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int N, M;
	int i, j, k;
	scanf("%d %d", &N, &M);
	
	int *card = malloc(sizeof(int)*N);  //int card[N] ���ٰ� ����
	
	for(i=0; i<N; i++) {
		scanf("%d", (card+i));
	}
	
	int temp=0;
	int max=0;
	for(i=0; i<N; i++)  
		for(j=0; j<N; j++)
			for(k=0; k<N; k++) {
				if(i!=j && i!=k && j!=k) { // ī���� ������ ��ġ�� �ʰ�.
					temp=card[i]+card[j]+card[k];
					if(temp<=M && temp>max) { // ��� ����� �� �߿� M�� ���� ����� ���� ã�� ���� �ִ밪 ����. 
						max=temp;
					}			 
				} 
			}
		
	printf("%d", max);
	
	free(card); // malloc �ع�. 
		
	return 0;
}
