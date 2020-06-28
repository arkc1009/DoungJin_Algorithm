#include <stdio.h>

//알람시계 문제  'M<45' 조건을 바보같이 생각안하고 있었다가 찾아냈다. 
//시 분을 분으로 합치고 45분을 뺀뒤에 다시 시 분으로 나눔  

int main() {
	
	int H, M;
	int time;
	
	scanf("%d %d", &H, &M);
	
	if(H==0 && M<45) H=24; //0시가 24시로 표시될 수 있는 오류 보완  
	
	time=(H*60+M)-45; 
	
	printf("%d %d", time/60,time%60);
	
	return 0;
}
