#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//9012 괄호 문제 
//스택,, 쓰는 문제,,? 라고 해서 일단 풀어봤는데 정답은 맞는데
//이게 스택을 쓴건지 모르겠다 (? ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ 
//일단 "("괄호랑 ")"괄호가 들어올때마다 그 개수 카운팅 해주고 그 수가 맞으면 된다는게 베이스.
//추가적으로 "("가 ")"가 적은데 ")"가 나올경우 빠꾸.

//친구한테 물어보니 스택을 쓸때랑 이론은 같따! 스택으로 구현해봐야 겠다. 
//+ 스택으로 만들어보고 비교해보니 결국 쓸데없는 변수만 있지 스택이랑 똑같았따. 

int main() {
	
	int testcase;
	int i, j;
	char input[50]; 
	int test; //")"이  "("보다 적은가를 판단하기 위함. 
	
	scanf("%d", &testcase);
	for(i=0; i<testcase; i++) {		
		test=0;
		
		scanf("%s", input);
		for(j=0; j<strlen(input); j++) {
			if(input[j]=='(') test++;
			else if(input[j]==')' && test<=0) { //"("이 ")"보다 적은데 ")"가 들어온 경우 
				test++;
				break;	
			}
			else if(input[j]=')') test--;	
		}
		if(test==0) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
