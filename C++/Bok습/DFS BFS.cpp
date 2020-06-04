#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool gr[1001][1001]={false};
bool check[1001]={false};
bool check2[1001]={false};
queue<int>v;

void dfs(int n) {
	check[n]=true;
	
	cout << n << " ";
	
	for(int i=1; i<=1000; i++) 
		if(!check[i] && gr[n][i]) 
			dfs(i);
	
}

void bfs(int n) {
	
	int temp;
	check2[n]=true;
	v.push(n);
	
	while(!v.empty()) {
		temp=v.front();
		v.pop();
		for(int i=1; i<=1000; i++) {
			if(!check2[i] && gr[temp][i]) {
				check2[i]=true;
				v.push(i);
			}
		}
		cout << temp << " ";
	}
	
}

int main() {
	
	int N, M, V;
	int p1, p2;
	
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
