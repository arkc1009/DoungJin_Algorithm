#include <iostream>

//2798 ���� ����
//������ C�� Ǯ�����µ� �ٽ� Ǯ�
//����~�ƻ�~ ����������~(?)
//����� ���� ������ ���� ���� ��ø���� �ʰ� �ϴ°� �׳��� ���� 

using namespace std;

int main() {
	
	int N, M;
	cin >> N >> M;
	
	int num[N];
	int Max=0;
	int temp=0;
	
	for(int i=0; i<N; i++) cin >> num[i];

	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(j==i) continue;
			for(int k=0; k<N; k++) {
				if(k==i || k==j) continue;
				temp=num[i]+num[j]+num[k];
				if(temp<=M) {
					Max=max(Max, temp);
				}
			}
		}
	}
	
	cout << Max << endl;
	
	return 0;
}
