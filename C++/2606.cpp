#include <iostream>
#include <queue>

//2606 바이러스 문제
//bfs를 사용해서 풀이 

using namespace std;

bool coms[101][101]={false};
bool check[101]={false};
queue<int>v;

int bfs(int n) {
	
	int cnt=0;
	check[n]=true;
	v.push(n);
	
	while(!v.empty()) {
		cnt++;
		int temp = v.front();
		v.pop();
		for(int i=1; i<=100; i++) {
			if(!check[i] && coms[temp][i])	{
				check[i]=true;
				v.push(i);
			}		
		}
	}
	
	return cnt;
}

int main() {
	
	int comN, com1, com2;
	int comCnt;
	cin >> comN;
	cin >> comCnt;
	for(int i=0; i<comCnt; i++) {
		cin >> com1 >> com2;
		coms[com1][com2]=true;
		coms[com2][com1]=true;
	}
	
	int ansCnt=bfs(1); // bfs로 1과 연결된 항목 탐색할때마다 cnt++ 
	
	cout << ansCnt-1; //1번 컴퓨터는 제외  
	
	return 0;
}
