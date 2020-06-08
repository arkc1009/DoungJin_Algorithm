#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

int gr[101][101]={false};
queue<pair<int, int>>step;
bool chk[101][101]={false};
int cnt=0;
int finCnt;
bool sw=false;
int N, M;


void bfs(int y, int x) {
	
	chk[y][x]=true;
	step.push(make_pair(y, x));
	
	while(!step.empty()) {
		sw=false;
		int chkY=step.front().first;
		int chkX=step.front().second;
		cnt++;
		if(chkY==N && chkX==M) break;
		step.pop();
		
		if(!chk[chkY+1][chkX] && gr[chkY+1][chkX]) {
			chk[chkY+1][chkX]=true;
			step.push(make_pair(chkY+1, chkX));
			sw=true;
		}
		if(!chk[chkY-1][chkX] && gr[chkY-1][chkX]) {
			chk[chkY-1][chkX]=true;
			step.push(make_pair(chkY-1, chkX));
			sw=true;
		}
		if(!chk[chkY][chkX+1] && gr[chkY][chkX+1]) {
			chk[chkY][chkX+1]=true;
			step.push(make_pair(chkY, chkX+1));
			sw=true;
		}
		if(!chk[chkY][chkX-1] && gr[chkY][chkX-1]) {
			chk[chkY][chkX-1]=true;
			step.push(make_pair(chkY, chkX-1));
			sw=true;
		}
		if(!sw) cnt--;
		cout << "(" << chkY << "," << chkX << ") cnt : " << cnt << "\n";
	}
	
	
	
	
	

}
//(세로, 가로)로 침. 
int main() {
	
	
	string input;
	cin >> N >> M;
	for(int i=1; i<=N; i++) {
		cin >> input;
		for(int j=0; j<M; j++) {
			char temp[1]={input[j]};
			gr[i][j+1]=atoi(temp);
		}
	}
	
	bfs(1, 1);
	
	cout << cnt;

	return 0;
}
