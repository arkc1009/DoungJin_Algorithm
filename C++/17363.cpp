#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char,char>words;

void setWords() {
	words.insert(make_pair('.' ,'.'));
	words.insert(make_pair('O' ,'O'));
	words.insert(make_pair('-', '|'));
	words.insert(make_pair('|', '-'));
	words.insert(make_pair('/', '\\'));
	words.insert(make_pair('\\', '/'));
	words.insert(make_pair('^', '<'));
	words.insert(make_pair('<', 'v'));
	words.insert(make_pair('v', '>'));
	words.insert(make_pair('>', '^'));
}

int main() {
	
	setWords();
	
	int N, M;
	cin >> N >> M;
	
	vector<string>inputs;
	string input;
	for(int i=0; i<N; i++) {
		cin >> input;
		inputs.push_back(input);
	}
	
	for(int i=M-1; i>=0; i--) {
		for(int j=0; j<N; j++) {
			cout << words[inputs[j][i]];
		}
		cout << "\n";	
	}
	
	return 0;
}
