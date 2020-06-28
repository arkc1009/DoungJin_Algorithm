#include <stdio.h>
#include <stdbool.h>

//2875 대회or인턴 문제
// 뭔가 함수를 써보고 싶어서 while에 함수를 껴서 저런(!) 형태를 만들어보았다. 
// 좀 웃긴게, 테스트 디버그용 printf때문에 5번을 틀렸는데 그 5번동안 다른 문제들을 잡았다. ㅋㅋㅋㅋㅋㅋ
// 결국 문제 다 수정했는데도 안되고 난 다음에야 테스트용 print 발견 후 해결
// 문제1 : 팀 만들고 나서 남은 학생들로 인턴쉽을 채우는걸 깜박.
// 문제2 : 처음에 인턴쉽 학생이 총 학생들 보다 클때 검사를 깜박.
// 이건 main 함수 길어지는거 싫어서 함수에 넣었다가 결국 메인에 if 중괄호를,, 쓰면서,, 추가,,
// 문제3 : 포인트 변수는 -- ++ 가 안되는걸 깜박.
// 함수를 써보니까 포인터 포함해서 오랜만에 배워가는게 많았다..  

int team=0;
int K;

int test(int *pN, int *pM) {
	
	if(*pN>=2 && *pM>=1) {
		*pN-=2;
		*pM-=1;
		team++;
		return 1;
	}
	else if(K-(*pN+*pM)>0) {
		team--;
		K-=3;
		return 1;
	}
	else return 0;
}

int main() {
	
	int N, M;
	
	scanf("%d %d %d", &N, &M, &K);
	
	if(N+M<K) {
		printf("0");
		return 0;	
	}
	
	while(test(&N, &M)) {}
	
	printf("%d", team);
	
	return 0;
} 
