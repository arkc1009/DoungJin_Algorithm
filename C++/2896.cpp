#include <iostream>
#include <cstdio>

//2896 ������ Ĭ���� ����
//ó���� A-=I ���·� while�� ���ȴµ�, �׷� ���������� �Ǳ⶧���� ����ó�� �Ǿ���.
//�׷��� ���� ������ �������� ���� �ֽ��� ���� ���� �� �ִ� min���� ã�Ƽ�
//�� min������ ������ �����༭ ���� ���ش�.
//cout�� ����ϴϱ� ����ó�� �Ǽ� printf("%f")�� �ߴ��� ���е� ����ؼ� ����ó��. 

using namespace std;

int main() {
	
	float A, B, C, I, J, K;
	float one;
	
	cin >> A >> B >> C;
	cin >> I >> J >> K;
	
	float Min = min(min(A/I, B/J), C/K);
	
	printf("%f %f %f", A-Min*I, B-Min*J, C-Min*K);
	
	return 0;
} 
