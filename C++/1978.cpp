#include <iostream>

//1978 소수 찾기 문제
//원래 에라토스테니스의 체,,? 쓰려고 했는데 
//아무리봐도 시간이 2초길래 c++로 그냥 브루트 포스 느낌으로
//해도 될것 같았따 최대 가짓수가 100X1000 = 100000 이라고 생각했는데
//c++이라면 100000정도야,, 2초안에 안될리가,, 

using namespace std;

bool test(int a) {
	if(a==1) return true;
	for(int i=2; i<a; i++) {
		if(a%i==0) return true;
	}
	return false;
}

int main() {
	
	int N, count=0;
	int arr[100];
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
		if(!test(arr[i])) count++;
	}
	
	cout << count << endl;
	
	return 0;
} 
