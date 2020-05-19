#include <iostream>
#include <list>

using namespace std;

int main() {
	
	list<int> ll;
	list<int>::iterator iter;
	
	ll.push_back(1);
	ll.push_back(2);
	ll.push_back(3);
	ll.push_back(4);
	ll.push_back(5);
	ll.push_back(6);
	
	iter=ll.end();
	
	for(int i=0; i<6; i++) {
		
	}
	
	return 0;
}
