//2751 수 정렬하기2
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int input;
	vector<int>sort_arr; //정렬할 vector 생성 
	
	while(N--) {
		cin >> input;
		sort_arr.push_back(input); //반복마다 입력받아 vector에 push 
	}
	
	sort(sort_arr.begin(), sort_arr.end()); // sort (quick sort) 
	
	for(int i=0; i<sort_arr.size(); i++) {
		cout << sort_arr[i] << "\n";
	}

	return 0;
}
