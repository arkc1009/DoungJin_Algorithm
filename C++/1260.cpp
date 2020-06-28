#include <iostream>
#include <vector>
#include <queue>

// 1260 DFS와 BFS문제 
// dfs, bfs를 둘 다 써볼 수 있었음.
// 가장 작은 수부터 탐색을 시작하는데 난 인접행령
// 2차원배열로 해서 딱히 상관없었따리  

using namespace std;

bool graph[1001][1001]={false};
bool check_dfs[1001]={false};
bool check_bfs[1001]={false};
queue<int>visit;
vector<int>dfsArr;
vector<int>bfsArr;

void dfs(int n) {
	check_dfs[n]=true;
	dfsArr.push_back(n);
	
	for(int i=1; i<=1000; i++) {
		if(graph[n][i] && !check_dfs[i]) {	
			dfs(i);
		}
	}
	
	
}

void bfs(int n) {
	
	visit.push(n);
	check_bfs[n]=true;
	
	while(!visit.empty()) {
		int ser = visit.front();
		bfsArr.push_back(ser);
		visit.pop();
		for(int i=1; i<=1000; i++) {
			if(graph[ser][i] && !check_bfs[i]) {
				visit.push(i);
				check_bfs[i]=true;
			}
		}
	}
	
	
	
}

int main() {
	
	int N, M, V;
	int pos1, pos2;
	
	cin >> N >> M >> V;
	
	for(int i=0; i<M; i++) {
		cin >> pos1 >> pos2;
		graph[pos1][pos2]=true;
		graph[pos2][pos1]=true; 
	}
	
	dfs(V);
	bfs(V);
	
	for(int i=0; i<dfsArr.size(); i++) {
		if(i==dfsArr.size()-1) cout << dfsArr[i];
		else cout << dfsArr[i] << " ";
	}
	cout << "\n";
	for(int i=0; i<bfsArr.size(); i++) {
		if(i==bfsArr.size()-1) cout << bfsArr[i];
		else cout << bfsArr[i] << " ";
	}
	
	return 0;
}
