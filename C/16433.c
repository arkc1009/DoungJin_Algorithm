#include <stdio.h>

//16433 �ֵ�� ��ٳ��� ����
// ó�� �ɴ� ����� ���� ���� ¦��,Ȧ������ �Ǻ��ؼ�
// (1,1) �ڸ����� ����� ������, (1,2) �ڸ����� ������ �Ǻ�
// �Ǻ��Ŀ��� ������ ��Ģ ����  

int main() {
		
	int N, R, C;
	scanf("%d %d %d", &N, &R, &C);
		
	int i, j;
	int j_temp;
	int temp;
	
	if((R%2)-(C%2)!=0) { // (1,2)���� ����� ���۵� ��� 
		j_temp=0;
		temp=1;
	}
	else{ //(1,1)���� ����� ���۵� ��� 
		j_temp=1;
		temp=-1;
	}
	
	for(i=1; i<=N; i++) {
		for(j=1; j<=N; j++) {
			if(j%2==j_temp) printf("v");
			else printf(".");
		}
		printf("\n");
		j_temp+=temp;
		temp*=-1; //j_temp�� 0�� 1�� �ݺ��ǰԲ�
		//if(j_temp==1) j_temp=0;
		//else j_temp=1; 
		//�� �Ƹ��� ���� 
	}
	return 0;
}
