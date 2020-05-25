#include <iostream>
#include <vector>

//1904 01타일 문제  
//음 일단 DP,,? 문젠것 같긴 한데
//풀순 있는데 이게 왜 DP인지 모르겠다는,, 저번부터,, 
//계산을 한번 미리 해서 계속 할 필요없다고 하는게 DP라곤 하는데 음
//뭔가 애초에 for문으로 하면 똑같지 않나? 
//처음에 배열 int arr[1000000]으로 했더니 시작하자마자 터지길래
//vector로 변경 

using namespace std;

int main() {
	
	vector<int>v;
	int N;
	
	v.push_back(1);
	v.push_back(2);
	
	cin >> N;
	
	for(int i=2; i<N; i++) {
		v.push_back((v[i-1]+v[i-2])%15746);
	}
	
	cout << v[N-1];
	
	return 0;
}
