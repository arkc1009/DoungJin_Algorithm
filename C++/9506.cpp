#include <iostream>
#include <vector>

//9506 약수들의 합 문제 

using namespace std;

vector<int>num;

bool answer(int n) {
	
	int result=0;
	
	for(int i=1; i<=n/2; i++) {
		if(n%i==0) {
			num.push_back(i);
			result+=i;	
		}
	}
	if(result==n) return true;
	else return false;
}

int main() {
	
	
	int n;
	
	while(n!=-1) {
		num.clear();
		cin >> n;
		if(n==-1) break;
		
		if(answer(n)) {
			cout << n << " = ";
			for(int i=0; i<num.size(); i++) {
				if(i==num.size()-1) cout << num[i];
				else cout << num[i] << " + ";
			}

		}
		else {
			cout << n << " is NOT perfect.";
		}
		cout << "\n";		
	}
	
	
	return 0;
}
