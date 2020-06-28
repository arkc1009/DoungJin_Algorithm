#include <iostream>
#include <string.h>

//1012 혐기농배추 문제
//고오랭지 배추,,,
//dfs로 풀어서 bfs질문을 활용할수도 없었다,,
//그래서 결국 반례를 직접 찾다.
//알고보니 탐색중에 좌표를 -1 을 할 경우가 없을거라고 생각했는데 아니였따. 

using namespace std;

int gr[51][51]={0};
int chk[51][51]={0};
int dCount=0;

void dfs(int x, int y) {
	
	chk[x][y]=1;
	
//	cout << "(" << x << "," << y << ")" << " ";
	
	if(gr[x+1][y] && !chk[x+1][y] && x!=50) {
		dfs(x+1, y);
	}
	if(gr[x-1][y] && !chk[x-1][y] && x!=1) {
		dfs(x-1, y);
	}
	if(gr[x][y+1] && !chk[x][y+1] && y!=50) {
		dfs(x, y+1);
	}
	if(gr[x][y-1] && !chk[x][y-1] && y!=1) {
		dfs(x, y-1);
	}
	
}

int main() {
	
	int T, M, N, K, X, Y;
	int cnt;
	
	cin >> T;
	for(int tc=0; tc<T; tc++) {
		cnt=0;
		cin >> M >> N >> K;
		for(int i=1; i<=K; i++) {
			cin >> X >> Y;
			gr[Y+1][X+1]=1;
		}
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				if(!chk[i][j] && gr[i][j]) {
					cnt++;
					dfs(i, j);
				}
			}
		}
//		cout << "\n";
//		for(int i=1; i<=N; i++) {
//			for(int j=1; j<=M; j++) {
//				if(chk[i][j]) cout << "1 ";
//				else cout << "0 "; 
//			}
//			cout << "\n";
//		}
		
		cout << cnt << "\n";
		memset(gr, 0, sizeof(gr));
		memset(chk, 0, sizeof(chk));
	}

	return 0;
}
