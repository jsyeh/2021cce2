///Week10-1.cpp step01-1
///小心,要用 .cpp 副檔名
///(1)讀檔案 FILE * fin=fopen("檔名", "r");
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
  ///scanf("%d", &N);///以前寫法
    fscanf( fin, "%d", &N );
    ///只是輔助 printf("讀到N是: %d\n", N);
    for(int i=0; i<N; i++){
      ///scanf("%s %d", name[i], &grade[i] );
        fscanf( fin, "%s %d", name[i], &grade[i] );
        ///只是輔助 printf("讀到了 %s %d\n", name[i], grade[i] );
    }

    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
