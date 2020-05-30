#include <iostream>
#include <queue>

//1966 프린터 큐 (보류) 

using namespace std;

int heap[101][2]={0};
int hcount;

void push(int ipt, int m) {
	
	heap[++hcount][0]=ipt;
	
	if(m) heap[hcount][1]=1;
	
	int child = hcount;
	int par = child/2;
	
	while(child>1 && heap[child][0]>=heap[par][0]) {
		swap(heap[child], heap[par]);
		child=par;
		par=child/2;
	}
}

int pop() {

	int result = heap[1][1];

	swap(heap[1], heap[hcount--]);
	
	int par=1;
	int child = par*2;
	
	if(child+1<=hcount) {
		child=(heap[child][0]>heap[child+1][0]) ? child : child+1;
	}
	
	while(child<=hcount && heap[par]<heap[child]) {
		swap(heap[par], heap[child]);
		
		par=child;
		child=par*2;
		
		if(child+1<=hcount) {
			child=(heap[child][0]>heap[child+1][0]) ? child : child+1;
		}
	}
	
	return result;
}

int main() {

	queue<bool>mqueue;
	
	int T;
	cin >> T;
	
	int N, M;
	int temp;
	int count=1;

	while(T--) {
		hcount=0;
		cin >> N >> M;
		for(int i=0; i<N; i++) {
			cin >> temp;
			if(i==M) push(temp, 1);
			else push(temp, 0);
		}
		for(int i=0; i<N; i++) {
			count++;
			cout << pop() << "\n";
			if(pop()) cout << count << "\n";
		}
		
	}
	
	return 0;
}
