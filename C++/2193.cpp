#include <iostream>

using namespace std;

int main() {
	long long int arr[90];
	
	int N;
	arr[0]=1;
	arr[1]=1;
	
	cin >> N;
	
	for(int i=2; i<N; i++) {
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	cout << arr[N-1];
	
	return 0;
}
