///Week06-0.cpp �Ѫ����D Hardwood Species �έp��������
#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(line) ){
			if( line[0]=='\0' ) break;
			N++;
		}
		if(t>1) printf("\n");
		printf("Test Case %d: %d lines\n", t, N);
	}
	return 0;
}
