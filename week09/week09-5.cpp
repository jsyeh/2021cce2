///Week09-5.cpp step03-1 把要名字一起排序!!!
#include <stdio.h>
#include <string.h> //strcpy()
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

				char tempName[80]; //字串怎麼交換? strcpy()
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
