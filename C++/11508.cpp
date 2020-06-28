#include <iostream>
#include <vector> 
#include <algorithm>

//11508 2+1���� ���� 
//�׳� ��Ѽ����� �����ؼ� ����� ���ԵǴ� ��ǰ ���� ���� ����. 

using namespace std;

int main() {
	
	vector<int>price;
	
	int N;
	int temp;
	int result=0;
	
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> temp;
		price.push_back(temp);		
	}
	
	sort(price.begin(), price.end(), greater<int>());
	
	for(int i=0; i<price.size(); i++) {
		if((i+1)%3!=0) result+=price[i];
	}
	
	cout << result;
	
	return 0;
}
