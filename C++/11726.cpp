#include <cstdio>
#include <algorithm>

//11726 2xn Ÿ�ϸ� ����
//git ��ɾ� �߸��Ἥ �� ����,,,,
//�Ƹ� DP������ ���� ������ ���� �밡�� �ϴٰ�
//10007�� �������� �������� �Ƹ� �ڷ����� ������ ����ߴ���,, 

int main() {
	
	int n, i;
	long long int arr[1000]={0};
	
	
	scanf("%d", &n);
	
	arr[0]=1;
	arr[1]=2;
	for(i=2; i<n; i++) {
		arr[i]=(arr[i-1]+arr[i-2])%10007;
	}
	
	printf("%lld", arr[n-1]);
	
	return 0;
}
