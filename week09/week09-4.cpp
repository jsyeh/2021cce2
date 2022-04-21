///Week09-4.cpp step02-3 在瘋狂程設裡, 不只要排序很多項。想要排序更多項哦!
///我們先把Input 及 Output 改好。不過在交換時, 我們只換一些些而已, 下一個版本要改進
#include <stdio.h>
char name[100][80];//最多100筆資料,每筆80個字母
int grade[100];//最多100筆資料,每筆是int整數
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){  //為什麼有加 &
		scanf("%s %d", name[i], &grade[i] );
	}

	for(int k=0; k<N-1; k++){//排序囉!!!
		for(int i=0; i<N-1; i++){//先寫泡泡核心
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];//交換
				grade[i]=grade[i+1];
				grade[i+1]=temp;
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
