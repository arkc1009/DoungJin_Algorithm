#include <iostream>
#include <stack>

//11724 ���� ����� ���� ���� 
//��-¥ ���� �Ȱ���,, �����Ҵµ�,,
//DFS���� �������� �غ��ϱ� DFS�� �׷��� �Ѵ� ������ ������ ��Ե�
//���� ��������,, ���� �ʼ�,, ���� ����� DFS�� ������̴�. 

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
