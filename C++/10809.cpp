#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string S;
	cin >> S;
	
	for(int i='a'; i<='z'; i++) {
		char temp=i;
		if(S.find(temp)+1>0)		
			cout << S.find(temp) << " ";
		else 
			cout << -1 << " ";
	}

	return 0;	
}

