///Week06-2.cpp �Ѫ����D Hardwood Species �έp��������
#include <stdio.h>
#include <stdlib.h>//Step02 qsort()
#include <string.h>//Step02 strcmp()
char tree[1000000][40];
///       1�ʸU��  40�r��
int compare( const void *p1, const void *p2 )//Step02
{
	char * s1 = (char*)	p1;
	char * s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(tree[N]) ){ ///while( gets(line) ){
            if( tree[N][0] == 0) break; ///	if( line[0]=='\0' ) break;

			N++;
		}
		if(t>1) printf("\n");
		//printf("Test Case %d: %d lines\n", t, N);

		qsort( tree, N,    40,     compare );// Step02 �r��Ƨ�
		//�n�ư}�C  N�� ���j�p  ��j�p���禡

		for(int i=0; i<N; i++){ //Step02
			printf("%s\n", tree[i] );//Step02
		}
	}
	return 0;
}
