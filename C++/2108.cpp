#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sol_round(float r) {
	int value = int(r*10);
	if(abs(value%10) >= 5)  {
		if(value>=0) return value/10 + 1;
		else return value/10 - 1;
	}
	return int(r);
}

int main() {
	
	vector<int>nums;
	vector<pair<int, int>>counts;
	//count, value
	
	int N;
	cin >> N;
	
	int input;
	float sum = 0;
	for(int i=0; i<N; i++) {
		cin >> input;
		sum += input;
		nums.push_back(input);
	}

	//Avg
	cout << sol_round(sum/N) << "\n";
	
	//Center
	sort(nums.begin(), nums.end());
	cout << nums[N/2] << "\n";
	
	//Many
	for(int i=0; i<N; i++) {
		int temp = count(nums.begin(), nums.end(), nums[i]);
		counts.push_back(make_pair(nums[i], temp));
	}
	
	counts.erase(unique(counts.begin(), counts.end()), counts.end());

	for(int i=0; i<counts.size(); i++) {
		int temp = counts[i].first;
		counts[i].first = counts[i].second;
		counts[i].second = temp;
	}
	
	sort(counts.begin(), counts.end());

	int max = counts[counts.size()-1].first;
	int maxIdx = 0;
	for(int i=0; i<counts.size(); i++) {
		if(counts[i].first == max) {
			maxIdx = i;
			break;
		}
	}	
	if(maxIdx == counts.size()-1) cout << counts[counts.size()-1].second;
	else cout << counts[maxIdx+1].second;
	cout << "\n";
	
	//Array
	cout << nums[N-1]-nums[0];
	
	return 0;
}
