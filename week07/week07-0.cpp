///Week07-0.cpp step01-1
///今天考字串排序, 老師針對同學錯的地方進行解說

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];

int compare( const void *p1, const void *p2)
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}

	qsort(line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
