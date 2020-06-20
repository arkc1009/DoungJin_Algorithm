#include <iostream>
#include <map>

using namespace std;

int main() {
	
	map<int, char>grades;
	
	grades.insert(make_pair(5, 'F'));
	grades.insert(make_pair(6, 'D'));
	grades.insert(make_pair(7, 'C'));
	grades.insert(make_pair(8, 'B'));
	grades.insert(make_pair(9, 'A'));
	
	int N;
	cin >> N;
	N/=10;
	if(N>9) N=9;
	else if(N<=5) N=5;
	
	cout << grades[N];
	
	return 0;
}
