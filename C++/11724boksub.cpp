#include <iostream>
#include <vector>

//연결 요소으 ㅣ개수 복습 
//DFS, Graph, vector
using namespace std;

bool cheak[1001]={false};
bool graph[1001][1001]={false};
int N, M; 


void dfs(int a) {
	cheak[a]=true;
	
	for(int i=1; i<=N; i++) {
		
		if(graph[a][i] && !cheak[i]) dfs(i);
		
	}
}


int main() {
	
	int u, v; 
	int cnt=0;
	
	cin >> N >> M;
	
	for(int i=1; i<=M; i++) {
		cin >> u >> v;
		graph[u][v]=true;
		graph[v][u]=true;
	}

	for(int i=1; i<=N; i++) {
		if(!cheak[i]) {
			dfs(i);
			cnt++; //한번의 dfs로 체크가 되지 않았다. == 서로 독립되어 있는 연결개수이다. 
		}
	}
	
	cout << cnt; 
	
	return 0;
}
