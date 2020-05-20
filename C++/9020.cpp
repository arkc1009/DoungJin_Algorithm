#include <iostream>
#include <cstdio>

//9020 �������� ���� ����
//�̹��� �����佺�׳׽��� ü �˰��� ����غ��ҵ�. (��ã�ⶩ ����Ž����)
//�������� ������ �˰����̶� ���Ҵ�.

/*

�ִ� �������� 10000���� ������ �Ҽ��� �����佺�׳׽��� ü�� ���� �̸� ����
n�� �Ҽ����� ���̰� ���� ����� �ϱ� ������ n/2���� üũ
�׷��� �Ҽ�1 + �Ҽ�2 == n �� ������ �ȵǸ� �Ҽ�1�� -- �Ҽ�2�� ++ 

*/

using namespace std;

int main() {
	
	int T;
	int n;
	
	cin >> T;
	
	bool prime[10000]={false};	
	for(int i=2; i<=10000; i++) {
		if(prime[i]) continue;
		for(int j=i+i; j<=10000; j+=i) prime[j]=true;
	} 
	
	int num1, num2;
	bool sw;
	
	for(int i=0; i<T; i++) {
		sw=false;
		scanf("%d", &n);
		for(int j=n/2; j>=2; j--) {
			if(prime[j]) continue;
			for(int k=j; k<=n; k++) {
				if(prime[k]) continue;
				if(j+k==n) {
					num1=j;
					num2=k;
					sw=true;
					break;
				}
			}
			if(sw) break;
		}
		printf("%d %d\n", num1, num2);
	}
	
	return 0;
}
