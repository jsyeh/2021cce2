//Week07-3.cpp �ѨM UVA10420 List of Conquests
// step02-3 ��a�W   �H�W(�ܦh�Ů�)
//          scanf()  gets()
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
		scanf("%s", line[i] ); //���䪺��a�W
		char others[80];//�ѤU��
		gets( others );//�k�������Ū��
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
