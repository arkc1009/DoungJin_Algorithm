#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//9012 ��ȣ ���� 
//����,, ���� ����,,? ��� �ؼ� �ϴ� Ǯ��ôµ� ������ �´µ�
//�̰� ������ ������ �𸣰ڴ� (? ������������������������������ 
//�ϴ� "("��ȣ�� ")"��ȣ�� ���ö����� �� ���� ī���� ���ְ� �� ���� ������ �ȴٴ°� ���̽�.
//�߰������� "("�� ")"�� ������ ")"�� ���ð�� ����.

//ģ������ ����� ������ ������ �̷��� ����! �������� �����غ��� �ڴ�. 
//+ �������� ������ ���غ��� �ᱹ �������� ������ ���� �����̶� �Ȱ��ҵ�. 

int main() {
	
	int testcase;
	int i, j;
	char input[50]; 
	int test; //")"��  "("���� �������� �Ǵ��ϱ� ����. 
	
	scanf("%d", &testcase);
	for(i=0; i<testcase; i++) {		
		test=0;
		
		scanf("%s", input);
		for(j=0; j<strlen(input); j++) {
			if(input[j]=='(') test++;
			else if(input[j]==')' && test<=0) { //"("�� ")"���� ������ ")"�� ���� ��� 
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
