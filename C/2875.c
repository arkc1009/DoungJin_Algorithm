#include <stdio.h>
#include <stdbool.h>

//2875 企噺or昔渡 庚薦
// 杭亜 敗呪研 潤左壱 粛嬢辞 while拭 敗呪研 恩辞 煽訓(!) 莫殿研 幻級嬢左紹陥. 
// 岨 数延惟, 砺什闘 巨獄益遂 printf凶庚拭 5腰聖 堂携澗汽 益 5腰疑照 陥献 庚薦級聖 説紹陥. せせせせせせ
// 衣厩 庚薦 陥 呪舛梅澗汽亀 照鞠壱 貝 陥製拭醤 砺什闘遂 print 降胃 板 背衣
// 庚薦1 : 得 幻級壱 蟹辞 害精 俳持級稽 昔渡襲聖 辰酔澗杏 鉛酵.
// 庚薦2 : 坦製拭 昔渡襲 俳持戚 恥 俳持級 左陥 適凶 伊紫研 鉛酵.
// 戚闇 main 敗呪 掩嬢走澗暗 夙嬢辞 敗呪拭 隔醸陥亜 衣厩 五昔拭 if 掻胤硲研,, 床檎辞,, 蓄亜,,
// 庚薦3 : 匂昔闘 痕呪澗 -- ++ 亜 照鞠澗杏 鉛酵.
// 敗呪研 潤左艦猿 匂昔斗 匂敗背辞 神沓幻拭 壕趨亜澗惟 弦紹陥..  

int team=0;
int K;

int test(int *pN, int *pM) {
	
	if(*pN>=2 && *pM>=1) {
		*pN-=2;
		*pM-=1;
		team++;
		return 1;
	}
	else if(K-(*pN+*pM)>0) {
		team--;
		K-=3;
		return 1;
	}
	else return 0;
}

int main() {
	
	int N, M;
	
	scanf("%d %d %d", &N, &M, &K);
	
	if(N+M<K) {
		printf("0");
		return 0;	
	}
	
	while(test(&N, &M)) {}
	
	printf("%d", team);
	
	return 0;
} 
