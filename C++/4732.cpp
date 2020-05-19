#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//4732 ���ű� ����
//��,, ���� �Ӹ������δ� �ݹ� ���÷ȴµ� �װ� �����ϱⰡ,, ��,,
//�ڵ尡 ����ִ� �迭�� ����� �Է¹��������� �� �ڵ尡 �ִ� �迭 �ε����� int�� ���Ϳ� �����ѵڿ�
//�� �����ٿ� �Էµ� �� ��ŭ ���ؼ� ���! 

using namespace std;

string sounds[12]={"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int sfind(string a) {
	a=a.substr(0,1);
	
	for(int i=0; i<12; i++) {
		if(a==sounds[i]) return i;  
	} 
	return -1; //���ڳ�, ***�� ���ö� 
}

int main() {
	
	string input;

	vector<int>inputs;
	int temp;
	int move_count;
	int sounds_index;
	
	while(1) {
		
		cin >> input;
		if(input=="***") return 0; //while ���ǿ� ���� �Ʒ� stoi �Լ��� ����ǰ� ����Ǽ� ����Ʈ���� �� Ȯ�� 100% 
		temp=sfind(input); //�迭 �ε��� �޾ƿ� 
		if(temp>=0) { //�ڵ带 �Է¹޾����� 0���ٴ� ������ Ŭ�� 
			string test = input.substr(1,1); //�ڵ� �ڿ� #�̳� b�� �پ����� ������ �ø���/������ �ϱ� ���� 
			if(test=="#") temp++;
			else if(test=="b") temp--;
			inputs.push_back(temp); //int�� ���Ϳ� �־������ 
		}
		else { //���ű� ���� �޾Ҵٸ� sfind�Լ����� -1�� ���ϵǾ� ����� �ð� 
			move_count = stoi(input); //���ڿ��� ���������� ��ȯ  
			for(int i=0; i<inputs.size(); i++) {
				sounds_index=inputs[i]+move_count; //���ű谪��ŭ ���Ϳ� �ִ� �Է��ߴ� �ڵ���� �迭 �ε������� �����־� ���� 
				if(sounds_index>=12) sounds_index-=12; //�������� ���� ���� 12�� G#�� ���ű� �������� ��� 
				else if(sounds_index<=0) sounds_index+=12; //���� ���� 1�� A�� �������� �������� ��� 
				cout << sounds[sounds_index] << " "; //��� 
			}
			cout << endl;
			inputs.clear(); //���� �ʱ�ȭ (�����ָ� �� �׽�Ʈ���̽� ���� ��� ��µ�) 
		}	
	}	
	
	return 0;
}
