#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
//1966 프린터 큐 문제 
//질문들을 보면서 생각을 정리하고 다시 풀음.
//옛날엔 왜 그렇게 복잡하게 하다가 틀렸는지,, ㅋㅋㅋㅋ
//그냥 문서를 넣는 doc큐에 우선순위를 저장할 벡터의 인덱스값을 넣으면 되는것이다ㅏ1!!!
//그래서 queue가 빌때까지 front()값을 꺼내서 우선순위 벡터의 인덱스로 사용. 

using namespace std;

int main() {

	int T, N, M;
	int temp; // ipx input
	int page; // doc값을 넣음. 
	int cnt;
	
	cin >> T;
	
	for(int tc=0; tc<T; tc++) {
		queue<int>doc;
		vector<int>ipt;
		cnt=0;
		cin >> N >> M;
		for(int i=0; i<N; i++) {
			cin >> temp;
			ipt.push_back(temp); //우선순위를 각 큐 인덱스에 맞게 삽입. 
			doc.push(i); //문서, 우선순위의 인덱스를 삽입. 
		}
		
		vector<int>sortVec(ipt); //가장 큰 우선순위를 확인하기 위한 정렬용 벡터. 
		sort(sortVec.begin(), sortVec.end(), greater<int>()); //내림차순 정렬 
		
		while(!ipt.empty()) {
			page=doc.front();
			doc.pop();
			if(ipt[page]>=sortVec[cnt]) { // 인쇄조건 
				cnt++;
				ipt[page]=0; //이거 왜 해준거지? 
				if(page==M) break; //인쇄된 문서의 인덱스가 내가 찾던 문서의 인덱스와 동일하면 탈출. 
			}
			else {
				doc.push(page);
			}
		}
		cout << cnt << "\n";	
	}

	return 0;
}
