#include <stdio.h>

//��ٳ��� ����   �ܹ��ſ� ����� �迭�� ���� ���� �Է� ���� �� ���� �������� �Լ� ����
//�������� ��Ų�Ŀ� Ǯ��. 

void bubble(int *a, int count) { //�������� �Լ�, �迭 ũ�� �������°� �ָ��ؼ� ũ�⸦ ������ count���� �ϳ� �� �� 
	int i, j;
	int temp;
	
	for(i=0; i<count; i++)
		for(j=0; j<count-1; j++)
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	
}

int main() {
	
	int bugger[3];
	int drink[2];	
	int i;
	
	for(i=0; i<3; i++) scanf("%d", &bugger[i]);
	for(i=0; i<2; i++) scanf("%d", &drink[i]);
	
	bubble(bugger, 3);
	bubble(drink, 2);
	
	printf("%d", (bugger[0]+drink[0])-50);
	
}
