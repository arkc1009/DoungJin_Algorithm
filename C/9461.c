#include <stdio.h>
#include <stdlib.h>

//9461 파도반 수열 문제
// 문제를 살펴보다가 처음에는 아 파란색 삼각형 배열이랑 흰색 삼각형 배열 두개를 만들어서
// 파란색 삼각형이 새로 갱신될때는 흰색 배열에 -1번째, 파란색 배열의 -2번째를 더하고
// 흰색 삼각형이 갱신될때는 반대로 하면 되겠구나 싶었는데
// 더 생각해보니까 제목이 수열이길래 수열로 생각해봤더니 그냥 2,3번째 전 값들을 더해주면 되는거였다!
// 그래서 그냥 배열하나로 처리...하는김에 처음 입력한 N값보다 다음 입력한 N값이 작으면 새로 연산할 필요가
// 굳이 있을까 싶어서 전의 입력된 N값이 더 크면 추가연산없이 바로 출력하게 나름 최적화 했다.
// 또 배열 크기도 해주,,,려다가 realloc쓰면 메모리 크기 텨져서 포기 ㅎㅎㅎㅎ 

int main() {
	int testcase, N, i, j;
	int max=-1; //테스트 케이스마다 배열을 계속 연산 할 필요없게끔 할때 사용 
	
	long long int *array=malloc(sizeof(long long int)*100); 
	
	scanf("%d", &testcase);
	
	for(i=0; i<testcase; i++) {
		scanf("%d", &N);
		if(max<N-1) //이번에 입력한 N값이 저번 N값보다 크면 
			for(j=max+1; j<N; j++) { //이미 그 전N값까지는 연산이 되어있으니 거기부터 시작 
				if(j<3) array[j]=1;
				else array[j]=array[j-2]+array[j-3];				
			max=N-1; //전 N값(가장 컸던 값을 현재 N값으로 변경) 
		}
		printf("%lld\n", array[N-1]); // 출력 
	}
	
	free(array); // 메모리 해방 
}
