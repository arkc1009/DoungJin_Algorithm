#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//9012 ��ȣ ����
//���� ���ù���? ������ push, pop�� stack�����ȿ� ���� ����־��µ� �����غ��� �׷��ʿ� X 

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
