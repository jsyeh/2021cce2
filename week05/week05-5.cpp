///Week05-5.cpp step03-2 ���X�e2�ӵ{��
#include <stdio.h>
#include <stdlib.h>///qsort()�ݭn��
#include <string.h>///strcmp()�ݭn��
char line[1000000][40]; ///�@�ʸU��,�C��40�Ӧr��!!!
int comp(const void *p1, const void *p2)
{
    ///int d1 = *(int*)p1,  d2 = *(int*)p2;
    char *s1 = (char*)p1;
    char *s2 = (char*)p2;
    return strcmp(s1,s2);///�r���j�p!!!
}
int main()
{
	int T;//Test cases���X��
	scanf("%d\n\n", &T);//��!!! ��2�Ӹ���

	for(int t=1; t<=T; t++){
		if(t>1) printf("\n");
		int N=0;
		while( gets(line[N]) ){
			if( line[N][0]==0 ) break; //���}�j��
			N++;
		}
		qsort( line, N, 40, comp);
		for(int i=0; i<N; i++) printf("%s\n", line[i]);
	}
}
