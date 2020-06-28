#include <stdio.h>
#include <stdlib.h>

//14648 쿼리 맛보기 문제
//쿼리라는것도 처음 접했고 scanf를 이런식으로 써서 쿼리 종류를 판단할 수 있구나를
//이번에 설마될까 해서 했는데 되길래 알았다. (원래는 문자열로 받아서 잘라야 하나 싶었음..)
//그리고 출력이 쿼리 입력 다끝나고 하는건줄 알고 왜 틀렸나 싶었는데 찾아보니까 각각 출력이였음^^
//+ 정답의 자료형 크기가 모자라서 틀렸었음 

int main() {
	
	int n, q, i ,j, qurry_sw;
	int temp; //swap할때 쓸 변수 
	int a, b, c, d; //이것도 배열로 할까 했다가 너무 길어져서 
	scanf("%d %d", &n, &q);
	
	int *arr=malloc(sizeof(int)*n); //시간이 부족하면 그냥 arr[1000]
	long long int qurry_answer;
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]); //수열 값 입력  
	}
	
	for(i=0; i<q; i++) {
		
		qurry_answer=0; //이 변수에 값을 정해주는게 아니라 더해주거나 빼주는거라 0으로 초기화 
		
		scanf("%d", &qurry_sw); //쿼리 종류를 구분짓는 수를 먼저 입력받아서 구분하기 위함(이게 되더라) 
		if(qurry_sw==2) scanf("%d %d %d %d", &a, &b, &c, &d);
		else scanf("%d %d", &a, &b);	
		
		for(j=a-1; j<b; j++) qurry_answer+=arr[j]; //배열인덱스는 0부터시작이라 a-1부터 b까지 
										//일단 a~b 더해주는건 쿼리1이나 쿼리2나 똑같아서 그냥 일단 더하기 
		if(qurry_sw==2) for(j=c-1; j<d; j++) qurry_answer-=arr[j]; //쿼리2면 추가적으로 c~d부분 값만큼 빼주기 이것도 원래 abcd=0으로 초기화하면 if필요없을 것 같았는데 for문에서 오류나기도 하고 비효율적이라 
		else { //쿼리1이면 스왑해줘야 해서  
			temp=arr[a-1];
			arr[a-1]=arr[b-1];
			arr[b-1]=temp;
		}
		printf("%lld\n", qurry_answer);
	}
	
	free(arr);
	return 0;
}
