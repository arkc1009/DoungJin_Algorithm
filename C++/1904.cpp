#include <iostream>
#include <vector>

//1904 01Ÿ�� ����  
//�� �ϴ� DP,,? ������ ���� �ѵ�
//Ǯ�� �ִµ� �̰� �� DP���� �𸣰ڴٴ�,, ��������,, 
//����� �ѹ� �̸� �ؼ� ��� �� �ʿ���ٰ� �ϴ°� DP��� �ϴµ� ��
//���� ���ʿ� for������ �ϸ� �Ȱ��� �ʳ�? 
//ó���� �迭 int arr[1000000]���� �ߴ��� �������ڸ��� �����淡
//vector�� ���� 

using namespace std;

int main() {
	
	vector<int>v;
	int N;
	
	v.push_back(1);
	v.push_back(2);
	
	cin >> N;
	
	for(int i=2; i<N; i++) {
		v.push_back((v[i-1]+v[i-2])%15746);
	}
	
	cout << v[N-1];
	
	return 0;
}
