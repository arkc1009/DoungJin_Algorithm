#include <iostream>

//2798 블랙잭 문제
//옛날에 C로 풀었었는데 다시 풀어봄
//왠전~탬색~ 브투뚜포스~(?)
//경우의 수를 따질때 서로 수가 중첩되지 않게 하는게 그나마 관건 

using namespace std;

int main() {
	
	int N, M;
	cin >> N >> M;
	
	int num[N];
	int Max=0;
	int temp=0;
	
	for(int i=0; i<N; i++) cin >> num[i];

	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(j==i) continue;
			for(int k=0; k<N; k++) {
				if(k==i || k==j) continue;
				temp=num[i]+num[j]+num[k];
				if(temp<=M) {
					Max=max(Max, temp);
				}
			}
		}
	}
	
	cout << Max << endl;
	
	return 0;
}
