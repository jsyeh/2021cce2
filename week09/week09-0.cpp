#include <stdio.h> //步驟 1-6
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char nation[2001][80];

int compare( const void *p1, const void *p2 )//qsort()
{
	return strcmp( (char*)p1, (char*)p2 );//step04
}
int main()
{
	int N;
	scanf("%d", &N);

	for(int i=0; i<N; i++){//Step01: Input
		scanf("%s", nation[i] );//只用它
		char line[80];
		gets(line);//剩下的都讀到 line 不用它
	}

	qsort( nation, N, 80, compare ); //step03: qsort()

	nation[N][0]=0;//空字串
	int combo=1;
	for(int i=0; i<N; i++){//Step02: Output
		if( strcmp(nation[i],nation[i+1])==0 ){//相同
			combo++;//Step05
		}else{//不相同,印答案,重設combo
			printf("%s %d\n", nation[i], combo );
			combo=1;//Step06
		}
	}
}
