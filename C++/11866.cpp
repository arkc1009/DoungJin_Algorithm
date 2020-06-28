#include <iostream>
#include <queue>

//11866 �似Ǫ�� ���� ����(..?)
//ť�� �̿��ؼ� �̰� ��� Ǯ�� ������ ����غôµ�
//K, K����� �ƴϸ� pop�� ���ְ� �ٽ� push���ؼ� ����Ŭ�� �����°� �ٽ�.


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
