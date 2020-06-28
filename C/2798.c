#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int N, M;
	int i, j, k;
	scanf("%d %d", &N, &M);
	
	int *card = malloc(sizeof(int)*N);  //int card[N] 였다가 수정
	
	for(i=0; i<N; i++) {
		scanf("%d", (card+i));
	}
	
	int temp=0;
	int max=0;
	for(i=0; i<N; i++)  
		for(j=0; j<N; j++)
			for(k=0; k<N; k++) {
				if(i!=j && i!=k && j!=k) { // 카드의 값들이 겹치지 않게.
					temp=card[i]+card[j]+card[k];
					if(temp<=M && temp>max) { // 모든 경우의 수 중에 M과 가장 가까운 수를 찾기 위한 최대값 저장. 
						max=temp;
					}			 
				} 
			}
		
	printf("%d", max);
	
	free(card); // malloc 해방. 
		
	return 0;
}
