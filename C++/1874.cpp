#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	
	vector<int>nums;
	vector<char>answers;
	stack<int>sol;
	int n;
	cin >> n;
	
	int input;
	
	for(int i=0; i<n; i++) {
		cin >> input;
		nums.push_back(input);
	}
	
	int idx=0;
	for(int i=1; i<=n+1; i++) {
		if(i==n+1) {
			if(sol.top() == nums[idx]) {
				sol.pop();
				idx++;
				answers.push_back('-');	
				i--;
			}
		}
		else {	
			if(sol.empty()) {
				sol.push(i);
				answers.push_back('+');
			}
			else if(sol.top() == nums[idx]) {
				sol.pop();
				idx++;
				answers.push_back('-');
				i--;
			}	
			else if(sol.top() < nums[idx]) {
				sol.push(i);
				answers.push_back('+');
			}	
		}
		if(idx == n) break;
	}
	
	if(sol.empty()) {
		for(int i=0; i<answers.size(); i++) {
			cout << answers[i] << "\n";
		}
	}
	else {
		cout << "NO";
	}
	
	return 0;
}
