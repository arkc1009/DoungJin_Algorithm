//1259 ÆÓ¸°µå·Ò¼ö
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
	string input;
	while(input != "0") {
		cin >> input;
		string buf = input;
		reverse(input.begin(), input.end());
		if(input != "0") {
			if(input == buf) cout << "yes\n";
			else cout << "no\n";
		}
	}
	
	return 0;
}
