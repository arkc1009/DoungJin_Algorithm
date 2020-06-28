#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//4732 조옮김 문제
//음,, 뭔가 머릿속으로는 금방 떠올렸는데 그걸 구현하기가,, 참,,
//코드가 들어있는 배열을 만들고 입력받을때마다 그 코드가 있는 배열 인덱스를 int형 벡터에 저장한뒤에
//그 다음줄에 입력된 수 만큼 더해서 출력! 

using namespace std;

string sounds[12]={"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int sfind(string a) {
	a=a.substr(0,1);
	
	for(int i=0; i<12; i++) {
		if(a==sounds[i]) return i;  
	} 
	return -1; //숫자나, ***이 들어올때 
}

int main() {
	
	string input;

	vector<int>inputs;
	int temp;
	int move_count;
	int sounds_index;
	
	while(1) {
		
		cin >> input;
		if(input=="***") return 0; //while 조건에 쓰면 아래 stoi 함수가 실행되고 종료되서 프린트오류 뜰 확률 100% 
		temp=sfind(input); //배열 인덱스 받아옴 
		if(temp>=0) { //코드를 입력받았으면 0보다는 무조건 클것 
			string test = input.substr(1,1); //코드 뒤에 #이나 b이 붙었을때 반음을 올리기/내리기 하기 위함 
			if(test=="#") temp++;
			else if(test=="b") temp--;
			inputs.push_back(temp); //int형 벡터에 넣어버리기 
		}
		else { //조옮김 값을 받았다면 sfind함수에서 -1이 리턴되어 여기로 올것 
			move_count = stoi(input); //문자열을 정수형으로 변환  
			for(int i=0; i<inputs.size(); i++) {
				sounds_index=inputs[i]+move_count; //조옮김값만큼 벡터에 있던 입력했던 코드들의 배열 인덱스들을 더해주어 저장 
				if(sounds_index>=12) sounds_index-=12; //스케일의 가장 상위 12도 G#이 조옮김 됬을때를 대비 
				else if(sounds_index<=0) sounds_index+=12; //가장 하위 1도 A가 조내림이 됬을때를 대비 
				cout << sounds[sounds_index] << " "; //출력 
			}
			cout << endl;
			inputs.clear(); //벡터 초기화 (안해주면 전 테스트케이스 값이 계속 출력됨) 
		}	
	}	
	
	return 0;
}
