#include <stdio.h>
#include <stdlib.h>

//최소, 최대 문제  버블정렬..을 했다가 시간초과가 떠서 최소 최대 비교로 풀이 

int main() {
	
	int input, i, j;
	scanf("%d", &input);
	
	int max=-1000000;
	int min=1000000;
	
	int *su = malloc(sizeof(int)*input);
	for(i=0; i<input; i++) {
		scanf("%d", &su[i]);
		if(max<=su[i]) max=su[i]; //최대값 저장 
		if(min>=su[i]) min=su[i]; //최솟값 저장	
	}
			
	printf("%d %d", min, max);
	
	free(su);
	
	return 0;
}
