#include <iostream>
#include <vector>

//14929 ������ (SIB) ����
//�ϴ� �ð��ʰ� �߰� ��� Ǫ���� ���� ��Ʈ? Ǯ��?�� �� �ذ���.
//������, �κ����̶�°� �˾���. 

using namespace std;

int main() {
	
	long long int x[100000];
	long long int sum[100000];
	
	int n;
	long long int result=0;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x[i];
	}
	
	sum[0]=x[0];
	
	for(int i=1; i<n; i++) { 
		sum[i]=sum[i-1]+x[i];
	} // �� for���� ���ذ� �Ȱ��µ�, �ñ׸����� �Ẹ�ϱ�
	// x1*x2 + x1*x3 = x1(x2+x3) ���� �������Ŀ� ���ؼ� �� �� �ִٴ°� ���޾Ҵ�.!
	//(x2+x3) �κ��� ������, �κ������� ó���ϸ� �ǰڱ��� �;���. 
		
	for(int i=0; i<n; i++) {
		result+=x[i]*(sum[n-1]-sum[i]); //(x1 + x2 + x3)�� �س��� �����տ��� a�� ���� �ö󰨿� ���� �κ������� ó��. 
	}
	
	cout << result;
	
	return 0;
}
