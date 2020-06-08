#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int T;
	int a, b;
	int temp;
	cin >> T;
	while(T--) {
		cin >> a >> b;
		temp=a;
		for(int i=0; i<b-1; i++) {
			temp=(temp%10)*a;
		}
		cout << temp%10 << "\n";
	}
	
	return 0;
}
