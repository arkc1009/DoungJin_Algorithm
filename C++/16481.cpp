#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	
	int r1, r2, r3;
	scanf("%d %d %d", &r1, &r2, &r3);
	
	double r = (1.0/r1)+(1.0/r2)+(1.0/r3); 
	
	printf("%.10f", (1/r));
	
	return 0;
}
