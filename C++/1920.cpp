#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

//1920 수찾기 문제
//알고리즘 헤더의 binary_search를 썻다.
//vvector도 써봤따. cout로 했다가 시간초과 떳다.! 

using namespace std;

int main() {
	
	vector<int>arr;
	
	int n;
	int input;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &input);
		arr.push_back(input);
	}
	
	sort(arr.begin(), arr.end());
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &input);
		if(binary_search(arr.begin(), arr.end(), input)) printf("%d\n", 1);
		else printf("%d\n", 0);
	}
	
	return 0;
}

