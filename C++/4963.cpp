#include <iostream>

using namespace std;

int mw, mh;
bool gr[51][51]={false};
bool chk[51][51]={false};

void clear(int w, int h) {
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			gr[i][j]=false;
			chk[i][j]=false;
		}
	}
}

void dfs(int w, int h) {
	
	chk[h][w]=true;
	
	if(!chk[h][w+1] && gr[h][w+1] && w!=mw) dfs(w+1, h);
	if(!chk[h+1][w+1] && gr[h+1][w+1] && w!=mw && h!=mh) dfs(w+1, h+1);
	if(!chk[h+1][w] && gr[h+1][w] && h!=mh) dfs(w, h+1);
	if(!chk[h+1][w-1] && gr[h+1][w-1] && h!=mh && w!=0) dfs(w-1, h+1);
	if(!chk[h][w-1] && gr[h][w-1] && w!=0) dfs(w-1, h);
	if(!chk[h-1][w-1] && gr[h-1][w-1] && h!=0 && w!=0) dfs(w-1, h-1);
	if(!chk[h-1][w] && gr[h-1][w] && h!=0) dfs(w, h-1);
	if(!chk[h-1][w+1] && gr[h-1][w+1] && h!=0 && w!=mw) dfs(w+1, h-1);
	
}

int main() {
	
	while(1) {
		cin >> mw >> mh;
		if(mw==0 && mh==0) break;
		for(int i=1; i<=mh; i++) {
			for(int j=1; j<=mw; j++) {
				cin >> gr[i][j];
			}
		}
		
		int cnt=0;
		
		for(int i=1; i<=mh; i++) {
			for(int j=1; j<=mw; j++) {
				if(!chk[i][j] && gr[i][j]) {
					dfs(j, i);
					cnt++;
				}
			}
		}
		
		cout << cnt << "\n";
		clear(mw, mh);
	}
	
	return 0;
}
