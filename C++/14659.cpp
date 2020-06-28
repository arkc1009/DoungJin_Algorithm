#include <iostream>
#include <vector>
#include <algorithm>

//14659 한조서열정리하고옴 ㅋㅋ
//음 탐욕법인진 모르겠는데 약간 완전탐색 느낌,,? 

using namespace std;

int main() {
	
	int n, input, maxKill=0;
	vector<int>h;
	int kill;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> input;
		h.push_back(input);
	}
	
	for(int i=0; i<n; i++) {
		kill=0;
		for(int j=i; j<n-1; j++) {
			if(h[i]<h[j+1]) break;
			else kill++;
		}
		maxKill=max(maxKill, kill);
	}
	
	cout << maxKill;
	
	return 0;
}
