#include <iostream>

//10872 ���丮�� ����
//��ͷ� �ϴϱ� �ð��ʰ��� �ߴ�. 

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
