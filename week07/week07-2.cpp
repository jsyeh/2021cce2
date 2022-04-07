///Week07-2.cpp step02-2 qsort()
///step02-2 接續前一個程式, 我們想要把它「照字母順序」排序, 使用了 qsort() 及對應的 compare()函式
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
		gets( line[i] ); //遇到空格,scanf()會被斷開,不能用!!!
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
