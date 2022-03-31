//Week06-3.cpp step02-1 ±Mª`¦b¦r¦ê±Æ§Ç
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char words[1000][50];//°}¦C
//        1¤d¦r 50¦r¥À
int compare( const void *p1, const void *p2 )
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", words[i] ); //gets( words[i] );
	}

	qsort( words, N, 50, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", words[i] );
	}
	return 0;
}
