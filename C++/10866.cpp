#include <iostream>

//10866 �� ���� ����
//����. ��. �𸣸�. ����. ����. �غ���淡.
// �ߴ�. �̷�. ���. ����. 

using namespace std;

int Deque[20000]={0};
int top=10000;
int floor=9999;

void push_front(int a) {
	Deque[floor--]=a;
}

void push_back(int a) {
	Deque[top++]=a;
}

int pop_front() {
	if(top-floor==1) return -1;
	else return Deque[++floor];
}

int pop_back() {
	if(top-floor==1) return -1;
	else return Deque[--top];
}

int size() {
	return top-floor-1;
}

bool empty() {
	if(top-floor==1) return -1;
	else return 0;
}

int front() {
	if(top-floor==1) return -1;
	else return Deque[floor+1];
}

int back() {
	if(top-floor==1) return -1;
	else return Deque[top-1];
}

int main() {

	int N;
	cin >> N;
	
	string cmd;
	int input;
	for(int i=0; i<N; i++) {
		cin >> cmd;
		if(cmd=="push_front") {
			cin >> input;
			push_front(input);
		}
		else if(cmd=="push_back") {
			cin >> input;
			push_back(input);
		}
		else if(cmd=="pop_front") cout << pop_front() << "\n";
		else if(cmd=="pop_back") cout << pop_back() << "\n";
		else if(cmd=="size") cout << size() << "\n";
		else if(cmd=="empty") cout << empty() << "\n";
		else if(cmd=="front") cout << front() << "\n";
		else if(cmd=="back") cout << back() << "\n";
	}
	
	return 0;
}
