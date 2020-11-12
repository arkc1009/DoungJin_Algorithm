#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	vector<pair<int, int>>pos;
	
	int x, y;
	for(int i=0; i<N; i++) {
		cin >> x >> y;
		pos.push_back(make_pair(y, x));
	}
	
	sort(pos.begin(), pos.end());
	
	for(int i=0; i<N; i++) {
		cout << pos[i].second << " " << pos[i].first << "\n";
	}
	
	return 0;
}
