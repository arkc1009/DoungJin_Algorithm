#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	
	int input;
	int maxI=0;
	
	while(T--) {
		cin >> input;
		maxI=input;
		while(input!=1) {
			if(input%2==0) {
				input/=2;
			}
			else {
				input*=3;
				input++;
			}
			maxI=max(maxI, input);
		}
		cout << maxI << "\n";
	}
	
	return 0;
}
