#include <iostream>

//10872 팩토리얼 문제
//재귀로 하니까 시간초과가 뜨다. 

using namespace std;

//int fact(int n) {
//	if(n==1) return 1;
//	else return fact(n-1)*n;
//}

int main() {
	
	int N;
	cin >> N;
	
	int ans=1;
	for(int i=ans; i<=N; i++) {
		ans*=i;
	}
	
	cout << ans;
	
	return 0;
}
