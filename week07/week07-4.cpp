///Week07-4.cpp step03-1 看是否相同: 相同時 combo++, 不相同時 印出結果
/// 接下來要統計「每個國家有幾個」, 我們手上的 line[i] 是一堆排好的國家名。
///可以上下2行比較,相同的,就 ++, 不相同的,就印出答案的數量。
///上週在 Hardwood Species 有用過這個技巧。
///今天再多做一個特別的修正,本來2000筆,變成2001筆。
///把最後一筆之後、不存在的下一筆,利用 line[N][0]=0 把那個不存在的字串設成空的字串。這樣程式就可以用簡單的迴圈運作
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];//和今天考試一樣
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] ); //左邊的國家名
		char others[80];//剩下的
		gets( others );//右邊全部都讀掉
	}

	qsort( line, N, 80, compare );

	line[N][0]=0;//最後收尾的多出來的資料, ex.N=2000, line[N]第2001筆
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp( line[i], line[i+1] ) == 0 ){ //相同
			combo++;
		}else{
			printf("%s %d\n", line[i], combo );
		}
	}
	return 0;
}
