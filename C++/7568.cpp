#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector<pair<int, int>>biggy;
	
	int x, y;
	for(int i=0; i<N; i++) {
		cin >> x >> y;
		biggy.push_back(make_pair(x, y));
	}
	
	int count=0;
	for(int i=0; i<biggy.size(); i++) {
		count=0;
		for(int j=0; j<biggy.size(); j++) {
			if(i==j) continue;
			if(biggy[i].first < biggy[j].first && biggy[i].second < biggy[j].second ) {
				count++;
			}
		}
		cout << count+1 << " ";
	}
	
	return 0;
}
