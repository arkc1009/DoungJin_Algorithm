#include <iostream>
#include <stack>
#include <string>

//2504 괄호의 값 문제
//1시간동안 뭔가 해봤는데 생각이 정리가 안되서 풀지를 못했따.
//결국 검색해서 다시 배우거나 한번 풀이를 보는게 더 도움이 될것 같아서 풀이 확인.
//머리로는 비슷하게 구상은했는데 되게 복잡할 것 같아서 쉽사리 구현을 못했는데
//보고 나니까 별거 아니였음 ㅋㅋ뤀 ㅋㅋㅋ 암튼 1패,, 

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(0);
    cin.tie(0); //cin 실행속도 향상
    
	stack<char>s;
	
	string input;
	cin >> input;

	int temp=1;
	int all=0;
	
	for(int i=0; i<input.length(); i++) {
		if(input[i]=='(') {
			temp*=2;
			s.push('(');
		}
		else if(input[i]=='[') {
			temp*=3;
			s.push('[');
		}
		else if(input[i]==')') {
			if(input[i-1]=='(') all+=temp;
			if(s.empty()) {
				all=0;
				break;
			}
			if(s.top()=='(') s.pop();
			temp/=2;
		}
		else if(input[i]==']') {
			if(input[i-1]=='[') all+=temp;
			if(s.empty()) {
				all=0;
				break;
			}
			if(s.top()=='[') s.pop();
			temp/=3;
		}
	}
	
	if(!s.empty()) all=0;
	 
	cout << all;
	
	return 0;
}
