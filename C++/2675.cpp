#include <iostream>

//2675 ���ڿ� �ݺ� ����
//������,, �ݺ���,,?  

using namespace std;

int main() {
	
	int T;
	int R;
	string input;
	
	cin >> T;
	for(int i=0; i<T; i++) {
		cin >> R;
		cin >> input;
		for(int j=0; j<input.length(); j++) {
			for(int k=0; k<R; k++) {
				cout << input[j];
			}
		}
		cout << endl;
	}
	
	return 0;
} 
