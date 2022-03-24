///Week05-5.cpp step03-2 結合前2個程式
#include <stdio.h>
#include <stdlib.h>///qsort()需要它
#include <string.h>///strcmp()需要它
char line[1000000][40]; ///一百萬行,每行40個字母!!!
int comp(const void *p1, const void *p2)
{
    ///int d1 = *(int*)p1,  d2 = *(int*)p2;
    char *s1 = (char*)p1;
    char *s2 = (char*)p2;
    return strcmp(s1,s2);///字串比大小!!!
}
int main()
{
	int T;//Test cases有幾個
	scanf("%d\n\n", &T);//啊!!! 有2個跳行

	for(int t=1; t<=T; t++){
		if(t>1) printf("\n");
		int N=0;
		while( gets(line[N]) ){
			if( line[N][0]==0 ) break; //離開迴圈
			N++;
		}
		qsort( line, N, 40, comp);
		for(int i=0; i<N; i++) printf("%s\n", line[i]);
	}
}
