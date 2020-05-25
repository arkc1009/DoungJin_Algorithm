#include <iostream>
#include <queue>

//11866 요세푸스 문제 문제(..?)
//큐를 이용해서 이걸 어떻게 풀면 좋을까 고민해봤는데
//K, K배수가 아니면 pop을 해주고 다시 push를해서 사이클을 돌리는게 핵심.


using namespace std;

int main() {
	
	int N, K; 
	queue<int>q;
	
	cin >> N >> K;
	int answer[N];
	int count=0;
	
	for(int i=1; i<=N; i++) {
		q.push(i);
	}
	
	for(int i=1; !q.empty(); i++) {
		if(i%K==0) {
			answer[count++]=q.front();
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	
	cout << "<";
	for(int i=0; i<N; i++) {
		if(i==N-1) cout << answer[i] << ">";
		else cout << answer[i] << ", ";
	}
	
	return 0;
}
