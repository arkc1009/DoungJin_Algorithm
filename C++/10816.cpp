#include <iostream>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M;
	map<int, int>cards;
	int haveCard;
	vector<int>findCard;
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> haveCard;
		auto it = cards.find(haveCard);
		if(it == cards.end()) cards.insert(make_pair(haveCard, 1));
		else cards[haveCard]++;
	}
	
	cin >> M;
	int findValue;
	for(int i=0; i<M; i++) {
		cin >> findValue;
		auto it = cards.find(findValue);
		if(it != cards.end()) {
			cout << cards[findValue] << " ";
		}
		else {
			cout << "0" << " ";
		}
	}
	
	return 0;
}
