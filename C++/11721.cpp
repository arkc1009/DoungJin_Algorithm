#include <iostream>

//益撹 杭亜 穿拭 獣亀澗 梅澗汽 堂形赤醸揮 庚薦
//焼原 C稽 熱醸陥亜 窒径神嫌 狂醸製 せせせせせせせせせせせせせせせ 
//丈硲 C++ string 置壱!  

using namespace std;

int main() {
	
	string input;
	
	cin >> input;
	
	for(int i=0; i<input.length(); i++) {
		if(i%10==0 && i!=0) cout << endl;
		cout << input[i];
	}
	
	return 0;
}
