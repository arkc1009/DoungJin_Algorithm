#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<int>cars;
	int number;
	int car;
	cin >> number;
	for(int i=0; i<5; i++) {
		cin >> car;
		cars.push_back(car);
	}	
	
	cout << count(cars.begin(), cars.end(), number);
	
	return 0;
}
