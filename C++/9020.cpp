#include <iostream>
#include <cstdio>

//9020 골드바흐의 추측 문제
//이번엔 에라토스테네스의 체 알고리즘 사용해보았따. (수찾기땐 완전탐색씀)
//생각보다 간단한 알고리즘이라 좋았다.

/*

최대 가짓수인 10000개의 수중의 소수를 에라토스테네스의 체를 통해 미리 구별
n의 소수합이 차이가 가장 적어야 하기 때문에 n/2부터 체크
그래서 소수1 + 소수2 == n 이 성립이 안되면 소수1은 -- 소수2는 ++ 

*/

using namespace std;

int main() {
	
	int T;
	int n;
	
	cin >> T;
	
	bool prime[10000]={false};	
	for(int i=2; i<=10000; i++) {
		if(prime[i]) continue;
		for(int j=i+i; j<=10000; j+=i) prime[j]=true;
	} 
	
	int num1, num2;
	bool sw;
	
	for(int i=0; i<T; i++) {
		sw=false;
		scanf("%d", &n);
		for(int j=n/2; j>=2; j--) {
			if(prime[j]) continue;
			for(int k=j; k<=n; k++) {
				if(prime[k]) continue;
				if(j+k==n) {
					num1=j;
					num2=k;
					sw=true;
					break;
				}
			}
			if(sw) break;
		}
		printf("%d %d\n", num1, num2);
	}
	
	return 0;
}
