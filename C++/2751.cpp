//2751 수 정렬하기2
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int input;
	vector<int>sort_arr;
	
	while(N--) {
		cin >> input;
		sort_arr.push_back(input);
	}
	
	sort(sort_arr.begin(), sort_arr.end());
	
	for(int i=0; i<sort_arr.size(); i++) {
		cout << sort_arr[i] << "\n";
	}

	return 0;
}
