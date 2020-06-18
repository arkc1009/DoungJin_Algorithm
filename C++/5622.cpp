#include <iostream>

using namespace std;

int main() {
	
	string dial[10]={" ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

	string input;
	int total=0;
	int sec;
	
	cin >> input;
	for(int i=0; i<input.size(); i++) {
		for(int j=2; j<10; j++) {
			if(dial[j].find(input[i])==string::npos) continue;
			sec = j+1;
		}
		total+=sec;
	}
	
	cout << total;
	
	return 0;
}
