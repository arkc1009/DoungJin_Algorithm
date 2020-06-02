#include <iostream>
#include <string.h>
//1012 (보류) 신명나게 틀리고 있는중,,^^! 

using namespace std;

bool graph[50][50]={false};
bool check[50][50]={false};

void dfs(int x, int y) {
	
	check[x][y]=true;
	
	if(!check[x+1][y] && graph[x+1][y] && x<49) {
		dfs(x+1, y);
	}
	if(!check[x][y+1] && graph[x][y+1] && y<49) {
		dfs(x, y+1);
	}
	
}

int main() {
	
	int T, M, N, K, X, Y;
	int cnt;
	cin >> T;
	
	for(int i=0; i<T; i++) {
		cnt=0;
		cin >> M >> N >> K;
		
		for(int j=0; j<K; j++) {
			cin >> X >> Y;
			graph[X][Y]=true;
		}
		
		for(int j=0; j<M; j++) {
			for(int k=0; k<N; k++) {
				if(!check[j][k] && graph[j][k]) {
					cnt++;
					dfs(j, k);
				}
			}
		}
		cout << cnt << "\n";
		memset(check, false, sizeof(check));
		memset(graph, false, sizeof(graph));
	}

	return 0;
}
