#include <iostream>
#include <string>
#include <algorithm>

//10988 팰린드롬인지 확인하기 문제
//reverse 함수 써서 슈루룩
//함수 아니면 스택으로 했어도 됬을듯? 

using namespace std;

int main() {
	
	string input;
	
	cin >> input;
	
	string temp=input;
	reverse(input.begin(), input.end());
	
	if(temp==input) cout << 1;
	else cout << 0;
	
	return 0;
}
