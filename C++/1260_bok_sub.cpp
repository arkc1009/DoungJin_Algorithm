#include <iostream>
#include <queue>

using namespace std;

bool gr[1001][1001]={false};
bool dfs_check[1001]={false};
bool bfs_check[1001]={false};
queue<int>visit;

void dfs(int n) {
	
	dfs_check[n]=true;
	
	cout << n << " ";
	for(int i=1; i<=1000; i++) {
		if(!dfs_check[i] && gr[n][i]) {
			dfs(i);
		}
	}
	
}

void bfs(int n) {
	
	bfs_check[n]=true;
	visit.push(n);
	
	
	
	while(!visit.empty()) {
		int s=visit.front();
		cout << s << " ";
		visit.pop();
		for(int i=1; i<=1000; i++) {
			if(!bfs_check[i] && gr[s][i]) {
				bfs_check[i]=true;
				visit.push(i);
			}
		}
	}
	
}

int main() {
	
	int N, M, V, p1, p2;
	cin >> N >> M >> V;
	for(int i=0; i<M; i++) {
		cin >> p1 >> p2;
		gr[p1][p2]=true;
		gr[p2][p1]=true;
	}
	
	dfs(V);
	cout << "\n";
	bfs(V);
	
	return 0;
} 
