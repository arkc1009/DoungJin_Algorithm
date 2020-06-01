#include <iostream>

//1012 (º¸·ù) 

using namespace std;

bool graph[51][51]={false};
bool check[51]={false};

void dfs(int n) {
	
	
}

int main() {
	
	int T, M, N, K, X, Y;
	cin >> T;
	for(int i=0; i<T; i++) {
		cin >> M >> N >> K;
		for(int j=0; j<K; j++) {
			cin >> X >> Y;
			graph[Y][X]=true;
		}
	}
	
	return 0;
}
