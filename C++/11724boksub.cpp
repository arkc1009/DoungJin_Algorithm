#include <iostream>
#include <vector>

//���� ����� �Ӱ��� ���� 
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
			cnt++; //�ѹ��� dfs�� üũ�� ���� �ʾҴ�. == ���� �����Ǿ� �ִ� ���ᰳ���̴�. 
		}
	}
	
	cout << cnt; 
	
	return 0;
}
