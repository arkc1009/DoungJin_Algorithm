#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//9012 胤硲 庚薦 
//什澱,, 床澗 庚薦,,? 虞壱 背辞 析舘 熱嬢挫澗汽 舛岩精 限澗汽
//戚惟 什澱聖 彰闇走 乞牽畏陥 (? せせせせせせせせせせせせせせせ 
//析舘 "("胤硲櫛 ")"胤硲亜 級嬢臣凶原陥 益 鯵呪 朝錘特 背爽壱 益 呪亜 限生檎 吉陥澗惟 今戚什.
//蓄亜旋生稽 "("亜 ")"亜 旋精汽 ")"亜 蟹臣井酔 匙荷.

//庁姥廃砺 弘嬢左艦 什澱聖 承凶櫛 戚経精 旭魚! 什澱生稽 姥薄背坐醤 畏陥. 
//+ 什澱生稽 幻級嬢左壱 搾嘘背左艦 衣厩 承汽蒸澗 痕呪幻 赤走 什澱戚櫛 業旭紹魚. 

int main() {
	
	int testcase;
	int i, j;
	char input[50]; 
	int test; //")"戚  "("左陥 旋精亜研 毒舘馬奄 是敗. 
	
	scanf("%d", &testcase);
	for(i=0; i<testcase; i++) {		
		test=0;
		
		scanf("%s", input);
		for(j=0; j<strlen(input); j++) {
			if(input[j]=='(') test++;
			else if(input[j]==')' && test<=0) { //"("戚 ")"左陥 旋精汽 ")"亜 級嬢紳 井酔 
				test++;
				break;	
			}
			else if(input[j]=')') test--;	
		}
		if(test==0) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
