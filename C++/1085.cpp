//직사각형에서 탈출 1085 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int x, y, w, h;
		
	cin >> x >> y >> w >> h;
	
	cout << min(min(min(w-x,h-y),y),x);
	
	return 0;
}
