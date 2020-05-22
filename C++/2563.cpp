#include <iostream>

//2563 색종이 문제
//이 문제도 간단한 완전탐색 문제인데
//뭔가 다른 방법이 있었을 것 같기도 한데(더 효울적이고 기발한!)
//근데 완전탐색이라길래,, 머,, 음,, 이중반복문 쵝오 

using namespace std;

bool paper[100][100]={false};

void sketch(int x, int y) {
	for(int i=y; i<y+10; i++) {
		for(int j=x; j<x+10; j++) {
			if(paper[i][j]) continue;
			else paper[i][j]=true;
		}
	}
}

int counting() {
	int count=0;
	for(int i=0; i<100; i++) {
		for(int j=0; j<100; j++) {
			if(paper[i][j]) count++;
		}
	}
	
	return count;
}

int main() {
	
	int paperCount;
	int size=0;
	int x, y;
	
	cin >> paperCount;
	for(int i=0; i<paperCount; i++) {
		cin >> x >> y;
		sketch(x, y);
	}
	
	cout << counting();
	
	return 0;
} 
