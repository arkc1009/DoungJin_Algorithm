#include <cstdio>
#include <algorithm>

//11726 2xn 타일링 문제
//git 명령어 잘못써서 다 날라감,,,,
//아마 DP문젠데 뭐가 문젠지 몰라서 노가다 하다가
//10007을 마지막에 나눴더니 아마 자료형이 터져서 고생했던듯,, 

int main() {
	
	int n, i;
	long long int arr[1000]={0};
	
	
	scanf("%d", &n);
	
	arr[0]=1;
	arr[1]=2;
	for(i=2; i<n; i++) {
		arr[i]=(arr[i-1]+arr[i-2])%10007;
	}
	
	printf("%lld", arr[n-1]);
	
	return 0;
}
