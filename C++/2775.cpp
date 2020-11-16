#include <iostream>

using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	int k ,n;
	while(T--) {
		cin >> k >> n;
		int rooms[15][15]={0};
		
		for(int i=0; i<=k; i++) {
			for(int j=1; j<=n; j++) {
				if(i==0) rooms[i][j]=j;
				else {
					for(int o=1; o<=j; o++) {
						rooms[i][j]+=rooms[i-1][o];
					}
				}
			}
		}
		cout << rooms[k][n] << "\n";
	}
	
	return 0;
}
