#include <iostream>

//2986 파스칼 문제
//후,,, 혐,,스,,칼,,, 답지랑,, 이론이 같았,,는데,,?
//반복 종료 조건을 i<=9 에서 i*i<=N 으로
//break 조건을 (N/i)*i==N 에서 N%i==0 으로 바꿔주고
//대략 1이나 소수인 애들 if로 정리 해주니까 풀렸따,, 머지,,? 

using namespace std;

int main() {
	
	long long int N;
	cin >> N;
	long long int i;
	for(i=2; i*i<=N; i++) {
		if(N%i==0) break;
		
	}
	
	if(i*i>N) i=N;
	if(N==1) N=0;
				
	cout << N-N/i;
	
	return 0;
}
