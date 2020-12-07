#include <iostream>

using namespace std;

bool chk[100][100]={false};
bool gr[100][100]={false};

int R, C;

void dfs(int i, int j) {
	
	chk[i][j]=true;
	
	if(j<C && gr[i][j+1] && !chk[i][j+1]) dfs(i,j+1);		
	if(j>0 && gr[i][j-1] && !chk[i][j-1]) dfs(i,j-1);
	if(i<R && gr[i+1][j] && !chk[i+1][j]) dfs(i+1,j);
	if(i>0 && gr[i-1][j] && !chk[i-1][j]) dfs(i-1,j);
}

int main() {
	
	int count=0;
	
	cin >> R >> C;
	
	char input;
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin >> input;
			if(input=='#') {
				gr[i][j]=true;
			}
		}
	}
	
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			if(gr[i][j] && !chk[i][j]) {
				dfs(i,j);
				count++;
			}
		}
	}
	
	cout << count;
	
	return 0;
}
