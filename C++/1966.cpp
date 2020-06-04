#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
//1966 ������ ť ���� 
//�������� ���鼭 ������ �����ϰ� �ٽ� Ǯ��.
//������ �� �׷��� �����ϰ� �ϴٰ� Ʋ�ȴ���,, ��������
//�׳� ������ �ִ� docť�� �켱������ ������ ������ �ε������� ������ �Ǵ°��̴٤�1!!!
//�׷��� queue�� �������� front()���� ������ �켱���� ������ �ε����� ���. 

using namespace std;

int main() {

	int T, N, M;
	int temp; // ipx input
	int page; // doc���� ����. 
	int cnt;
	
	cin >> T;
	
	for(int tc=0; tc<T; tc++) {
		queue<int>doc;
		vector<int>ipt;
		cnt=0;
		cin >> N >> M;
		for(int i=0; i<N; i++) {
			cin >> temp;
			ipt.push_back(temp); //�켱������ �� ť �ε����� �°� ����. 
			doc.push(i); //����, �켱������ �ε����� ����. 
		}
		
		vector<int>sortVec(ipt); //���� ū �켱������ Ȯ���ϱ� ���� ���Ŀ� ����. 
		sort(sortVec.begin(), sortVec.end(), greater<int>()); //�������� ���� 
		
		while(!ipt.empty()) {
			page=doc.front();
			doc.pop();
			if(ipt[page]>=sortVec[cnt]) { // �μ����� 
				cnt++;
				ipt[page]=0; //�̰� �� ���ذ���? 
				if(page==M) break; //�μ�� ������ �ε����� ���� ã�� ������ �ε����� �����ϸ� Ż��. 
			}
			else {
				doc.push(page);
			}
		}
		cout << cnt << "\n";	
	}

	return 0;
}
