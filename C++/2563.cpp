#include <iostream>

//2563 ������ ����
//�� ������ ������ ����Ž�� �����ε�
//���� �ٸ� ����� �־��� �� ���⵵ �ѵ�(�� ȿ�����̰� �����!)
//�ٵ� ����Ž���̶�淡,, ��,, ��,, ���߹ݺ��� ���� 

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
