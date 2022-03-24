///Week05-4.cpp step03-1 解決 Input
///(1)用今天考試過的 while(gets(line)) 讀一整行
///(2)火車頭 +車廂 +車廂 +車廂
#include <stdio.h>
char line[40];//一行不超過30字母,所以開40夠大了
int main()
{
	int T;//Test cases有幾個
	scanf("%d\n\n", &T);//啊!!! 有2個跳行

	for(int t=1; t<=T; t++){
		if(t>1) printf("\n");
		printf("現在是第%d堆資料\n", t);
		while( gets(line) ){
			//先不做事!!!
			if( line[0]==0 ) break; //離開迴圈
		}
	}
}
