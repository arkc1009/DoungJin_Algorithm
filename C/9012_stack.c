#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//9012 괄호 문제
//나름 스택버전? 원래는 push, pop에 stack변수안에 값을 집어넣었는데 생각해보니 그럴필요 X 

int top=-1;

bool IsEmpty() {
	if(top==-1) return true;
	else return false;
}

void push() {
	++top;
}

void pop() {
	top--;
}

int main() {
	
	int testcase;
	int i, j;
	char input[50];
	
	scanf("%d", &testcase);
	for(i=0; i<testcase; i++) {
		top=-1;
		scanf("%s", input);
		for(j=0; j<strlen(input); j++) {
			if(input[j]==')' && IsEmpty()) {
				push(input[j]);
				break;
			}
			else if(input[j]=='(') push();
			else if(input[j]==')') pop();
		}
		if(IsEmpty()) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
} 
