#include <stdio.h>
#include <stdbool.h> //true, false ������ؼ� 

//������ ����  ��Ե� ��ø�ݺ������� Ǯ�� �; �ϴٰ� �ι�° �ݺ����� j<10 �� �ƴ϶� j<=i �ؾߵȴٴ°� ������. 

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
			if(j!=i && per[i]==per[j]) { // ���߹ݺ����̶� 1��° �ݺ��� per[0]�� 2��° �ݺ��� per[0]�ߺ��� �˻� X 
				escape=true;
				break;
			}
		}
		if(!escape) count++; // ��ø�� �߰��ؼ� break�Ǹ� �� ���̴� ī��Ʈ X  
		escape=false; // �ٽ� �˻��ؾ� �ϱ� ������ �ʱ�ȭ 
	}
	
	printf("%d", count);
	
	return 0;
} 
