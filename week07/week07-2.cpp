///Week07-2.cpp step02-2 qsort()
///step02-2 ����e�@�ӵ{��, �ڭ̷Q�n�⥦�u�Ӧr�����ǡv�Ƨ�, �ϥΤF qsort() �ι����� compare()�禡
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];//�M���ѦҸդ@��
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		gets( line[i] ); //�J��Ů�,scanf()�|�Q�_�},�����!!!
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
