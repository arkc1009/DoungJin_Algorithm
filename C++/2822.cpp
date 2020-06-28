#include <iostream>
#include <vector>
#include <algorithm>

//2822 점수계산 문제
//vector pair를 사용해보았따. 

using namespace std;

int main() {
	
	int score;
	vector<pair<int, int>>scores;
	vector<int>idx;
	
	for(int i=0; i<8; i++) {
		cin >> score;
		scores.push_back(make_pair(score, i));
	}
	
	sort(scores.begin(), scores.end());
	
	score=0;
	
	for(int i=3; i<scores.size(); i++) {
		idx.push_back(scores[i].second);
		score+=scores[i].first;
	}
	
	sort(idx.begin(), idx.end());
	
	cout << score << "\n";
	for(int i=0; i<idx.size(); i++) {
		cout << idx[i]+1 << " ";
	}
		
	return 0;
}
