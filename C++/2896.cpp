#include <iostream>
#include <cstdio>

//2896 무알콜 칵테일 문제
//처음엔 A-=I 형태로 while을 돌렸는데, 그럼 정수연산이 되기때문에 오답처리 되었다.
//그래서 각각 비율로 나눴을때 가장 주스를 적게 만들 수 있는 min값을 찾아서
//그 min값으로 비율과 곱해줘서 각각 뺴준다.
//cout로 출력하니까 오답처리 되서 printf("%f")로 했더니 정밀도 상승해서 정답처리. 

using namespace std;

int main() {
	
	float A, B, C, I, J, K;
	float one;
	
	cin >> A >> B >> C;
	cin >> I >> J >> K;
	
	float Min = min(min(A/I, B/J), C/K);
	
	printf("%f %f %f", A-Min*I, B-Min*J, C-Min*K);
	
	return 0;
} 
