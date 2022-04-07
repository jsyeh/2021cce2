//Week07-3.cpp 解決 UVA10420 List of Conquests
// step02-3 國家名   人名(很多空格)
//          scanf()  gets()
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];//和今天考試一樣
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] ); //左邊的國家名
		char others[80];//剩下的
		gets( others );//右邊全部都讀掉
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
