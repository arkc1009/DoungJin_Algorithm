#include <iostream>
#include <stack>
#include <string>

//2504 ��ȣ�� �� ����
//1�ð����� ���� �غôµ� ������ ������ �ȵǼ� Ǯ���� ���ߵ�.
//�ᱹ �˻��ؼ� �ٽ� ���ų� �ѹ� Ǯ�̸� ���°� �� ������ �ɰ� ���Ƽ� Ǯ�� Ȯ��.
//�Ӹ��δ� ����ϰ� �������ߴµ� �ǰ� ������ �� ���Ƽ� ���縮 ������ ���ߴµ�
//���� ���ϱ� ���� �ƴϿ��� ������ ������ ��ư 1��,, 

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(0);
    cin.tie(0); //cin ����ӵ� ���
    
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
