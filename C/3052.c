#include <stdio.h>
#include <stdbool.h> //true, false 사용위해서 

//나머지 문제  어떻게든 중첩반복문으로 풀고 싶어서 하다가 두번째 반복문에 j<10 이 아니라 j<=i 해야된다는걸 깨달음. 

int main() {
	
	int input[10];
	int per[10];
	int i, j;
	int count=0;
	int escape=false;
	
	for(i=0; i<10; i++) {
		scanf("%d", &input[i]);
		per[i]=input[i]%42;
	}
	
	for(i=0; i<10; i++) {
		for(j=0; j<=i; j++) {
			if(j!=i && per[i]==per[j]) { // 이중반복문이라서 1번째 반복문 per[0]과 2번째 반복문 per[0]중복은 검사 X 
				escape=true;
				break;
			}
		}
		if(!escape) count++; // 중첩수 발견해서 break되면 그 아이는 카운트 X  
		escape=false; // 다시 검사해야 하기 때문에 초기화 
	}
	
	printf("%d", count);
	
	return 0;
} 
