#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<char>inputs;
	set<char>uni;
	string input;
	int N;
	int cnt=0;
	
	cin >> N;
	while(N--) {
		
		inputs.clear();
		uni.clear();
		cin >> input;
		for(int i=0; i<input.size(); i++) {
			inputs.push_back(input[i]);
		}
	
		inputs.erase(unique(inputs.begin(), inputs.end()), inputs.end());
		for(int i=0; i<inputs.size(); i++) {
			uni.insert(inputs[i]);
		}
		
		if(inputs.size() == uni.size()) cnt++;
		
	}

	cout << cnt;
	
	return 0;
}
