#include <iostream>

//2622 삼각형만들기 문제
// 머리가. 안돌아가서. 2틀동안. 풀었. 다. 
// 가장긴변 >= 중간변 >= 작은변 / 가장긴변 < (중간변+작은변)
// 조건만 챙기면 삽가능! 시간이 초과될줄 알았는데 안됬다. 
using namespace std;

int main() {
	
	int a, b, c;
	int torch, count=0;
	
	cin >> torch;
	a=torch-2;
	for(c=1; c<=a; c++) {
		for(b=1; b<=a; b++) {
			a=torch-(b+c);			
			if((a>=b && b>=c) && a<(b+c)) count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
