///Week06-5.cpp Hardwood Species �έp��������
#include <stdio.h>
#include <stdlib.h>//Step02 qsort()
#include <string.h>//Step02 strcmp()
char tree[1000000][40];
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

		qsort( tree, N,    40,     compare );// Step02 �r��Ƨ�

		printf("%s ", tree[0] );//���L�̫e������,�S������
		int combo=1;//����1�ʾ�

		for(int i=1; i<N; i++){ //Step02
			if( strcmp(tree[i-1],tree[i])==0 ){//tree[i-1] == tree[i]
				combo++;//�ۦP
			}else{//���ۦP,���ӤF��
				printf("%.4f\n", combo*100.0/N );
				printf("%s ", tree[i] );
				combo=1;//�S�O�s���}�l!!!
			}
			//printf("%s %.4f\n", tree[i], 100.0/N );//Step02
		}
		printf("%.4f\n", combo*100.0/N );
	}
	return 0;
}

