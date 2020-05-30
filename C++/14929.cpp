#include <iostream>
#include <vector>

//14929 귀찮아 (SIB) 문제
//일단 시간초과 뜨고 어떻게 푸는지 몰라서 힌트? 풀이?를 들어서 해결함.
//누적합, 부분합이라는걸 알았음. 

using namespace std;

int main() {
	
	long long int x[100000];
	long long int sum[100000];
	
	int n;
	long long int result=0;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x[i];
	}
	
	sum[0]=x[0];
	
	for(int i=1; i<n; i++) { 
		sum[i]=sum[i-1]+x[i];
	} // 이 for문이 이해가 안갔는데, 시그마식을 써보니까
	// x1*x2 + x1*x3 = x1(x2+x3) 으로 곱셈공식에 의해서 쓸 수 있다는걸 깨달았다.!
	//(x2+x3) 부분을 누적합, 부분합으로 처리하면 되겠구나 싶었다. 
		
	for(int i=0; i<n; i++) {
		result+=x[i]*(sum[n-1]-sum[i]); //(x1 + x2 + x3)을 해놓은 누적합에서 a의 값이 올라감에 따라 부분합으로 처리. 
	}
	
	cout << result;
	
	return 0;
}
