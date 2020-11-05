#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, int>>arr;
	vector<string>names;
	int N;
	cin >> N;
	
	int age;
	string name;
	
	for(int i=0; i<N; i++) {
		cin >> age >> name;
		arr.push_back(make_pair(age, i));
		names.push_back(name);
	}
		
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<arr.size(); i++) {
		cout << arr[i].first << " " << names[arr[i].second] << "\n";
	}
	
	return 0;
}
