#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int line[3]={1};
	while(1) {
		
		for(int i=0; i<3; i++) cin >> line[i];
				
		if(line[0]==0 && line[1]==0 && line[2]==0) break;

		sort(line+0, line+3);
		if((line[0]*line[0])+(line[1]*line[1])==(line[2]*line[2])) cout << "right";
		else cout << "wrong";
		cout << "\n";
			
	}
		
	return 0;
}
