#include <iostream>
#define A 300
#define B 60
#define C 10

using namespace std;

int main() {
	int T;
	cin >> T;
	
	int btns[3] = {0,};
	
	while(T>0) {
		if(T>=A) {
			btns[0]++;
			T-=A;
		}
		else if(T>=B) {
			btns[1]++;
			T-=B;
		}
		else if(T>=C) {
			btns[2]++;
			T-=C;
		}
		else {
			cout << -1;
			return 0;
		}
	}
	
	cout << btns[0] << " " << btns[1] << " " << btns[2];
	
	return 0;
}
