#include <stdio.h>

//상근날드 문제   햄버거와 음료수 배열을 따로 만들어서 입력 받은 후 괜히 버블정렬 함수 만들어서
//버블정렬 시킨후에 풀이. 

void bubble(int *a, int count) { //버블정렬 함수, 배열 크기 가져오는게 애매해서 크기를 가져올 count변수 하나 더 씀 
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
