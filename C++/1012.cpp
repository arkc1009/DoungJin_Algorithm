#include <iostream>
#include <string.h>

//1012 �������� ����
//������� ����,,,
//dfs�� Ǯ� bfs������ Ȱ���Ҽ��� ������,,
//�׷��� �ᱹ �ݷʸ� ���� ã��.
//�˰��� Ž���߿� ��ǥ�� -1 �� �� ��찡 �����Ŷ�� �����ߴµ� �ƴϿ���. 

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
