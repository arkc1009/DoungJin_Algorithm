#include <iostream>

//1748 수 이어쓰기 문제
//뭔가 풀릴듯 말듯 하다가 손고리즘 하고나서 바로 풀었다.
// 역시 손고리즘 쵝오 

using namespace std;

int main() {
	
	long long int size=0;
	int N;
	int addCount=1;
	int count=9;
	
	cin >> N;
	
	while(N) {
		if(N-count>=0) {
			N-=count;
			size+=count*addCount++;
			count*=10;
		}
		else {
			size+=N*addCount;
			N-=N;
		}
	}
	
	cout << size;
	
	return 0;
}
