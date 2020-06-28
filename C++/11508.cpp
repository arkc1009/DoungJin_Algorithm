#include <iostream>
#include <vector> 
#include <algorithm>

//11508 2+1세일 문제 
//그냥 비싼순으로 정렬해서 무료로 구입되는 제품 빼고 가격 더함. 

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
