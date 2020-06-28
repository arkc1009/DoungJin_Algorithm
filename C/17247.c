#include <stdio.h>
#include <math.h> 

//17247 택시거리 문제 
//식을 줬기 땜누에 so easyyyyyyyyyyyyyyy

int main() {
	
	int N, M, i, j, temp, posCount=0;
	int pos_x[2];
	int pos_y[2];
	
	scanf("%d %d", &N, &M);
	for(i=1; i<=N; i++) {
		for(j=1; j<=M; j++) {
			scanf("%d", &temp);
			if(temp==1) {
				pos_y[posCount]=i;
				pos_x[posCount++]=j;
			}
		}
	}

	temp=abs(pos_x[1]-pos_x[0])+abs(pos_y[1]-pos_y[0]);
	printf("%d", temp);	
	
	return 0;
}
