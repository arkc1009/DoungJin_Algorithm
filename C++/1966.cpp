#include <iostream>
#include <queue>
#include <vector>
//1966 프린터 큐 (보류) 

using namespace std;

int main() {

	queue<int>doc;
	vector<int>ipt;

	int T, N, M;
	int vcnt=0;
	int cnt=0;
	int temp;
	bool sw=false;
	cin >> T;
	
	for(int i=0; i<T; i++) {
		vcnt=0;
		cnt=0;
		sw=false;
		cin >> N >> M; 
		for(int j=0; j<N; j++) { //중요도 입력 
			cin >> temp;
			ipt.push_back(temp);
			if(j==M) doc.push(1);
		 	else doc.push(0);
		}
		
		for(int j=0; j<N; j++) {
			for(int k=vcnt; k<ipt.size(); k++) {
				if(ipt[vcnt]<ipt[k]) {
					doc.push(doc.front());
					doc.pop();
					ipt.push_back(ipt[vcnt++]);
					sw=true;
					break;
				}
			}
			if(!sw) {
				if(doc.front()==1) {
					doc.pop();
					break;
				}
				else {
					doc.pop();
					cnt++;
					vcnt++;
				}
			}
			
		}
		
		cout << cnt << "\n";
	}


	return 0;
}
