#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	for(int i=1; i<N; i++) {
		int sum=i;
		string str = to_string(i);
		
		for(int j=0; j<str.length(); j++) {
			sum+=int(str[j])-48;
		}
		if(sum == N) {
			cout << i;
			return 0;
		}
	}
	
	cout << 0;
	return 0;
}
