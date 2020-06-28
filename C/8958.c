#include <stdio.h>
#include <string.h>

//OX퀴즈 문제  strlen사용해서 반복문 제한 

int main() {
	
	int i, j, k, input;
	int count;
	int all;
	scanf("%d", &input);
	
	char OX[80];
	for(i=0; i<input; i++) {
		count=0; //여러번 쓰기 때문에 항상 초기화 
		all=0; // 위와 동일 
		scanf("%s", OX);
		for(j=0; j<strlen(OX); j++) {
			if(OX[j]=='O') count++; //O이면 count를 1씩 올려서 연속되는 만큼 증가 가능하게끔 
			else count=0; // X가 나오면 0으로 초기화  
			all+=count;
		}
		printf("%d\n", all);
	}
	
	return 0;
}
