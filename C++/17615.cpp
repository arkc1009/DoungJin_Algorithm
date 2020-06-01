#include <iostream>
#include <vector>

//

using namespace std;

int main() {
	
	int N;
	vector<char>balls;
	char temp;
	
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> temp;
		balls.push_back(temp); 
	}
	
	if(balls[0]=='R' || balls[balls.size()]=='R') {
		
	}
	
	return 0;
} 
