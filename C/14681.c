#include <stdio.h>
#include <stdlib.h>

// 4�и� ���ϱ� ���� �׳� if�� ���� �� �׷��� ���� ����Ʈ �迭�� malloc ��ô�. 

int main() {
	
	int *pos=malloc(sizeof(int)*2);
	
	scanf("%d", pos+0);
	scanf("%d", pos+1);
	
	int x=*(pos+0);
	int y=*(pos+1);
	
	if(x*y>0) { //�Ѵ� ���/���� ���� �Ǻ�  
		if(x>0) printf("1"); else printf("3"); // 1,3�и��� �Ǻ�  
	}
	else {
		if(x>0) printf("4"); else printf("2");// ���� ����  
	}
	
	free(pos);
	
	return 0;
}
