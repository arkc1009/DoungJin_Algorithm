#include <stdio.h>

//별찍기-13 문제  그냥 반복문  

int main() {
	
	int input;
	int i, j;
	
	scanf("%d", &input);
	
	for(i=0; i<input; i++) { // 위쪽 점점 늘어나는 별  
		for(j=0; j<=i; j++) printf("*");
		printf("\n");
	}
	
	for(i=i-2; i>=0; i--) { // 아래쪽 점점 줄어드는 별  
		for(j=0; j<=i; j++) printf("*");
		printf("\n");
	}
	
	return 0;
}
