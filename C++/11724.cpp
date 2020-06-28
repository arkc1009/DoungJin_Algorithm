#include <iostream>
#include <stack>

//11724 연결 요소의 개수 문제 
//진-짜 이해 안가서,, 뭣같았는데,,
//DFS부터 차근차근 해보니까 DFS랑 그래프 둘다 조금은 개념을 잡게된
//고마운 문제랄까,, 복습 필수,, 내가 사용한 DFS는 재귀형이다. 

using namespace std;

bool graph[1001][1001]={false};
bool cheak[1001];
int N, M;

void dfs(int idx) {
	
	cheak[idx]=true;
	
	for(int i=1; i<=N; i++) {
		if(graph[idx][i] && !cheak[i]) {
			dfs(i);			
		}
	}
}

int main() {

	int u, v;
	int count=0;
	
	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		cin >> u >> v;
		graph[u][v]=true;
		graph[v][u]=true;
	}
	
	for(int i=1; i<=N; i++) {
		if(!cheak[i]) {
			dfs(i);
			count++;	
		}
	}
	
	cout << count;
	
	return 0;
}
