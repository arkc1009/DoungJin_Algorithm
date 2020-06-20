#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int N, input;
	cin >> N;
	
	vector<int>inputs;
	
	while(N--) {
		cin >> input;
		inputs.push_back(input);
	}
	
	sort(inputs.begin(), inputs.end());
	
	for(int i=0; i<inputs.size(); i++) {
		cout << inputs[i] << "\n";
	}
	
	return 0;
}
