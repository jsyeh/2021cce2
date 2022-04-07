///Week07-5.cpp step03-3 Jumping Mario
///看懂題目: 原來是數一數, 有幾個往上跳up, 有幾個往下跳 down
#include <stdio.h>
int a[100];
int main()
{
	int T, N;
	scanf("%d", &T);
	for(int t=1; t<=T; t++){
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d", &a[i] );
		}

		int down=0, up=0;
		for(int i=1; i<N; i++){
			if( a[i-1] > a[i] ) down++;
			if( a[i-1] < a[i] ) up++;
		}
		printf("Case %d: %d %d\n", t, up, down);
	}

}
