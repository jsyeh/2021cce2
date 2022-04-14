///Week08-1.cpp step02-1 檔案
#include <stdio.h>
#include <string.h>
///Q: 陣列? 變數?
char names[20][20]; ///20人(複數),每人名長度20
int grades[20];///20個分數 (複數)
int main()
{
    ///int N;
    ///scanf("%d", &N); ///完了,題目沒有N,不好寫

    ///有N用for()迴圈,沒N用while()迴圈

    char name[20];///20個字母
    int grade;///分數
    int i=0;
    while( scanf("%s %d", &name, &grade)==2 ){
        strcpy(names[i], name); ///names[i] <- name
        grades[i] = grade; ///grades[i] <- grade
        i++;
    }
    int N = i;

    for(int i=0; i<N ; i++){
        printf("%s %d\n", names[i], grades[i] );
    }
}
