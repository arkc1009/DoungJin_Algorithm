#include <iostream> 
#include <algorithm>
#include <set>
#include <vector>
#include <string>

//1764 듣보잡 문제
//문제가 듣보잡이라는게 아니구
//원래 분류는 해싱? 이였는데 해쉬를 쓰는건지 뭔지
//찾아봐도 모르겠어서 일단 친구가 발로란트 하자고 빨리 오라길래
//vector를 써서 find함수를 썻다가 시간초과가 떠서
//중복이 안되는 stl이 생각나서 옛날 어떤 문제였는지 기억은 안나지만
//한 컨테이너 안에 넣었을때 사이즈가 안늘어나면 중복인걸로 간주하고
//그걸 정답 배열에 넣어서 출력함.
//처음에 중복 안되는 stl이 list로 착각했다가 set이였다는걸 깨달음.
//그랬더니 시간초과 안뜸 ㅋㅋㄹㅋㅋ (진심,,주절킹,, 주석 9줄,,?)  

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
