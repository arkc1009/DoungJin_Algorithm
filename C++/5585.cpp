#include <iostream>

//5585 거스름돈 문제 
//원래 최대한 빨리 풀어보자 싶어서
//처음 풀었을때는 그냥 if 6개써서 풀었다.
//그리고 조금씩 최적화를 해보았음.
//1. if6개
//2. coin변수에 엔값을 넣어서 5로 나누고 2나누고를 반복하면서
//순차적으로 if
//3. 지금형태 분류를 까보니까 그리디 알고리즘 이길래
//조금 찾아봤더니 뭔가 이런형태가 가장 나은것 같따. 

using namespace std;

int main() {
	
	int input;
	int count=0;
	int coin[6]={500, 100, 50, 10, 5, 1};

	cin >> input;
	input=1000-input;
	
	for(int i=0; input!=0;) {
		if(input>=coin[i]) {
			input-=coin[i];
			count++;
		}
		else i++;
	}
	
	cout << count << endl;
	
	return 0;
}
