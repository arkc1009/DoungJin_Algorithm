#include <stdio.h>

int main() {
	
	int input;

	int FT=3; //À§ ¾Æ·¡ ¹úÁý°¹¼ö 
	int LR=0; // ¾ç¿· ¹úÁý °¹¼ö 
	int sleep=7; // À§ º¯¼ö2°³¸¦ ÇÕÇÑ °ª, Áï ¹úÁýÀÇ ¸ðµç °¹¼ö Ä«¿îÆ® 
	int dream=2; // Áß¾Ó¿¡¼­ ¾ó¸¶³ª Áö³µ´ÂÁö 
	
	scanf("%d", &input);
	int i=input;
	
	if(input==1) {
		printf("1");
		return 0;
	} 
	
	while(i-sleep>0) {
		i=input;
		FT+=2;
		LR++;
		sleep+=(FT*2)+(LR*2);
		dream++;
	}
	
	printf("%d", dream);
	
	return 0;
}
