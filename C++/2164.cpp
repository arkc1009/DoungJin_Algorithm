#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int>card;
	int N;
	
	cin >> N;
	
	for(int i=1; i<=N; i++)
		card.push(i);

	for(int i=1; card.size()>1; i++) {
		if(i%2==0) {
			card.push(card.front());
			card.pop();
		}
		else {
			card.pop();
		}
	}
	
	cout << card.front();
	
	return 0;
}
