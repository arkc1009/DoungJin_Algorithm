//2751 �� �����ϱ�2
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int input;
	vector<int>sort_arr; //������ vector ���� 
	
	while(N--) {
		cin >> input;
		sort_arr.push_back(input); //�ݺ����� �Է¹޾� vector�� push 
	}
	
	sort(sort_arr.begin(), sort_arr.end()); // sort (quick sort) 
	
	for(int i=0; i<sort_arr.size(); i++) {
		cout << sort_arr[i] << "\n";
	}

	return 0;
}
