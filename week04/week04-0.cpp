///Week04-0.cpp 今天的考試題目
///我們想要解決瘋狂程設裡,Tell me the frequencies
///先把 Input 利用 while( gets(line) ) 解決
///再把 Output 的跳行, 利用火車頭 +車廂 +車廂 +車廂

#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");
		printf("Test Case %d\n", t);
		t++;
	}
	return 0;
}
