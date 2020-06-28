#include <stdio.h>
#include <stdlib.h>

// 4분면 구하기 문제 그냥 if만 쓰면 좀 그래서 괜히 포인트 배열로 malloc 써봤다. 

int main() {
	
	int *pos=malloc(sizeof(int)*2);
	
	scanf("%d", pos+0);
	scanf("%d", pos+1);
	
	int x=*(pos+0);
	int y=*(pos+1);
	
	if(x*y>0) { //둘다 양수/음수 인지 판별  
		if(x>0) printf("1"); else printf("3"); // 1,3분면중 판별  
	}
	else {
		if(x>0) printf("4"); else printf("2");// 위와 동일  
	}
	
	free(pos);
	
	return 0;
}
