#include <iostream>

//5585 �Ž����� ���� 
//���� �ִ��� ���� Ǯ��� �;
//ó�� Ǯ�������� �׳� if 6���Ἥ Ǯ����.
//�׸��� ���ݾ� ����ȭ�� �غ�����.
//1. if6��
//2. coin������ ������ �־ 5�� ������ 2������ �ݺ��ϸ鼭
//���������� if
//3. �������� �з��� ��ϱ� �׸��� �˰��� �̱淡
//���� ã�ƺô��� ���� �̷����°� ���� ������ ����. 

using namespace std;

int main() {
	
	int input;
	int count=0;
	int coin[6]={500, 100, 50, 10, 5, 1};

	cin >> input;
	input=1000-input;
	
	for(int i=0; input!=0;) {
		if(input>=coin[i]) {
			input-=coin[i];
			count++;
		}
		else i++;
	}
	
	cout << count << endl;
	
	return 0;
}
