#include <iostream>

//1357 뒤집힌 덧셈 문제
//음 자릿수마다를 나눠서 저장하고 곱해줘서 더해줌으로써
//역수가 되게끔 했는데. 그 과정에서
//예를 들어 10의자리수를 나누었을때 앞에 100,1000의 자리가 둘다 값이 0이면
//자릿수가 역수를 취했을때 1이였어야 했다. 그래서 각 자릿수마다
//그 앞의 자리들이 모두 값이 0이였으면 곱하는 수를 증가시키지 않았따. 

using namespace std;

int Rev(int a) {

	int num[5]={0};
	int divisor=10000;
	int factor=1;
	int result=0;
	
	for(int i=1; i<=4; i++) {
		num[i]=a%divisor/(divisor/10);
		num[i]*=factor;
		divisor/=10;
		for(int j=i; j>0; j--) {
			if(num[j]!=0) {
				factor*=10;
				break;
			}
		}
		result+=num[i];
	}

	return result;
}


int main() {
	
	int X, Y;
	
	cin >> X >> Y;
	
	cout << Rev(Rev(X)+Rev(Y));
	
	
	return 0;
}
