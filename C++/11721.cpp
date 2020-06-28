#include <iostream>

//그냥 뭔가 전에 시도는 했는데 틀려있었던 문제
//아마 C로 풀었다가 출력오류 떳었음 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ 
//얏호 C++ string 최고!  

using namespace std;

int main() {
	
	string input;
	
	cin >> input;
	
	for(int i=0; i<input.length(); i++) {
		if(i%10==0 && i!=0) cout << endl;
		cout << input[i];
	}
	
	return 0;
}
