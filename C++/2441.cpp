#include <iostream>

//2441 º°Âï±â ¹®Á¦
//Å·Âï±â 

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		for(int j=1; j<=n; j++) {
			if(j>i) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
