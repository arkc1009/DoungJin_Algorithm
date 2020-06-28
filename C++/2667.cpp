#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int gr[26][26]={0};
bool chk[26][26]={false};
queue<pair<int,int>>v; 
int N;

int bfs(int x, int y) {
	
	int cnt=0;
	v.push(make_pair(y, x));
	
	while(!v.empty()) {
		int curX=v.front().second;
		int curY=v.front().first;	
		
		if(!chk[curY][curX+1] && gr[curY][curX+1] && curX!=N) {
			v.push(make_pair(curY, curX+1));
			chk[curY][curX+1]=true;
		}
		if(!chk[curY][curX-1] && gr[curY][curX-1] && curX!=1) {
			v.push(make_pair(curY, curX-1));
			chk[curY][curX-1]=true;
		}
		if(!chk[curY+1][curX] && gr[curY+1][curX] && curY!=N) {
			v.push(make_pair(curY+1, curX));
			chk[curY+1][curX]=true;
		}
		if(!chk[curY-1][curX] && gr[curY-1][curX] && curY!=1) {
			v.push(make_pair(curY-1, curX));
			chk[curY-1][curX]=true;
		}
		cnt++;
		v.pop();
	}
	if(cnt==1) return cnt;
	else return cnt-1;
}

int main() {
	
	int cnt=0;
	string input;
	vector<int>hCnt;
	
	cin >> N;
	for(int i=1; i<=N; i++) {	
		cin >> input;
		for(int k=0; k<input.size(); k++) {
			gr[i][k+1]=input[k]-'0';
		}
	}
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			if(!chk[i][j] && gr[i][j]) {
				hCnt.push_back(bfs(j, i));
				cnt++;
			}
		}
	}
	
	sort(hCnt.begin(), hCnt.end());
	
	cout << cnt << "\n";
	for(int i=0; i<hCnt.size(); i++) cout << hCnt[i] << "\n";
	
	
	return 0;
}
