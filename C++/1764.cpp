#include <iostream> 
#include <algorithm>
#include <set>
#include <vector>
#include <string>

//1764 �躸�� ����
//������ �躸���̶�°� �ƴϱ�
//���� �з��� �ؽ�? �̿��µ� �ؽ��� ���°��� ����
//ã�ƺ��� �𸣰ھ �ϴ� ģ���� �߷ζ�Ʈ ���ڰ� ���� ����淡
//vector�� �Ἥ find�Լ��� ���ٰ� �ð��ʰ��� ����
//�ߺ��� �ȵǴ� stl�� �������� ���� � ���������� ����� �ȳ�����
//�� �����̳� �ȿ� �־����� ����� �ȴþ�� �ߺ��ΰɷ� �����ϰ�
//�װ� ���� �迭�� �־ �����.
//ó���� �ߺ� �ȵǴ� stl�� list�� �����ߴٰ� set�̿��ٴ°� ������.
//�׷����� �ð��ʰ� �ȶ� ���������� (����,,����ŷ,, �ּ� 9��,,?)  

using namespace std;

int main() {
	
	set<string>noH;
	vector<string>answer;
	vector<string>::iterator it;
	
	int N, M;
	cin >> N >> M;
	
	string input;
	for(int i=0; i<N; i++) {
		cin >> input;
		noH.insert(input);
	}
	int size;
	for(int i=0; i<M; i++) {
		cin >> input;
		size=noH.size();
		noH.insert(input);
		if(noH.size()==size) {
			answer.push_back(input);
		}
	}
	
	sort(answer.begin(), answer.end());
	
	cout << answer.size() << endl;
	for(it=answer.begin(); it!=answer.end(); it++) {
		cout << *it << endl;
	}
	
	return 0;
}
