#include <iostream>

//2292 벌집 문제
//옛날에 C로 풀었었는데 그냥 다시 풀어보자 싶어서 풀었다.
//그때보다 더 간단한 식을 찾아서 더 간단하게 해결!  

using namespace std;

int main() {
	
	int N, i;
	int count=0;
	
	cin >> N;
	for(i=1; N-1>count*6; i++) {
		count+=i;
	}
	
	cout << i;
	
	return 0;
}
