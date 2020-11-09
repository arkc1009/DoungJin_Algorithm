#include <iostream>

using namespace std;

int main() {
	int T;
	int H, W, N;
	
	cin >> T;
	while(T--) {
		cin >> H >> W >> N;
		N--;
		int floor = N%H;
		int host = N/H+1;
	
		cout << ++floor;
		if(host<10) cout << 0;
		cout << host << "\n";
	}
	
	return 0;
}
