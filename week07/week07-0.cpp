///Week07-0.cpp step01-1
///���ѦҦr��Ƨ�, �Ѯv�w��P�ǿ����a��i��ѻ�

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
